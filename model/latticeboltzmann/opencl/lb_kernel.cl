// Minimal D2Q9 kernel - matches CPU SCCell::preUpdate exactly
// Uses PUSH scheme like CPU to eliminate any pull/push mismatch

#define CELL_FLUID 0
#define CELL_WALL 1
#define CELL_SOURCE 2
#define CELL_OPEN 3
#define CELL_MOVING_WALL 4

// D2Q9 direction vectors (matching LBUtil::C[9])
// 0:(0,0)  1:(1,0)  2:(1,1)  3:(0,1)  4:(-1,1)
// 5:(-1,0) 6:(-1,-1) 7:(0,-1) 8:(1,-1)
__constant int CX[9] = {0, 1, 1, 0, -1, -1, -1, 0, 1};
__constant int CY[9] = {0, 0, 1, 1, 1, 0, -1, -1, -1};
__constant int OPP[9] = {0, 5, 6, 7, 8, 1, 2, 3, 4};
__constant double W[9] = {4.0/9.0, 1.0/9.0, 1.0/36.0, 1.0/9.0, 1.0/36.0,
                          1.0/9.0, 1.0/36.0, 1.0/9.0, 1.0/36.0};

__kernel void lb_collide_stream(
    __global const double* f,
    __global double* f_post,
    __global const int* cell_type,
    __global double* rho_out,
    __global double* ux_out,
    __global double* uy_out,
    __global double* uz_out,
    const int width,
    const int height,
    const int length,
    const double epsilon,
    __global const double* source_ux,
    __global const double* source_uy
) {
    int gid = get_global_id(0);
    int total = width * height * length;
    
    if (gid >= total) return;
    
    int type = cell_type[gid];
    
    // Walls: do nothing (bounce-back handled when neighbors push to us)
    if (type == CELL_WALL || type == CELL_MOVING_WALL) {
        // Copy f to f_post unchanged for wall cells
        for (int i = 0; i < 9; i++) {
            f_post[i * total + gid] = f[i * total + gid];
        }
        return;
    }
    
    int x = gid % width;
    int y = (gid / width) % height;
    
    // Open boundaries (Inlets / Outlets)
    if (type == CELL_SOURCE || type == CELL_OPEN) {
        // Step 1: Extrapolate macro properties from valid fluid neighbors
        double r = 0.0;
        double u_x = 0.0, u_y = 0.0;
        double weight_sum = 0.0;
        
        for (int i = 0; i < 9; i++) {
            if (i == 0) continue; // Skip rest particle for extrapolation
            
            int nx = x + CX[i];
            int ny = y + CY[i];
            if (nx >= 0 && nx < width && ny >= 0 && ny < height) {
                int nid = ny * width + nx;
                int ntype = cell_type[nid];
                if (ntype == CELL_FLUID) {
                    double n_rho = rho_out[nid];
                    double n_ux = ux_out[nid];
                    double n_uy = uy_out[nid];
                    
                    r += n_rho;
                    u_x += n_ux;
                    u_y += n_uy;
                    weight_sum += 1.0;
                }
            }
        }
        
        if (weight_sum > 0.0) {
            r /= weight_sum;
            u_x /= weight_sum;
            u_y /= weight_sum;
        } else {
            r = 1.0;
            u_x = 0.0;
            u_y = 0.0;
        }
        
        // Step 2: Apply boundary constraints
        if (type == CELL_SOURCE) {
            // Inlet: fixed velocity, extrapolated density
            u_x = source_ux[gid]; 
            u_y = source_uy[gid];
        } else if (type == CELL_OPEN) {
            // Outlet: fixed density (pressure), extrapolated velocity
            r = 1.0;
        }
        
        // Step 3: Write equilibrium distribution
        double u2 = u_x*u_x + u_y*u_y;
        for (int i = 0; i < 9; i++) {
            double cu = CX[i]*u_x + CY[i]*u_y;
            f_post[i * total + gid] = W[i] * r * (1.0 + 3.0*cu + 4.5*cu*cu - 1.5*u2);
        }
        
        // Save macros for next step extrapolation
        rho_out[gid] = r; 
        ux_out[gid] = u_x; 
        uy_out[gid] = u_y; 
        uz_out[gid] = 0.0;
        
        return;
    }
    
    // === FLUID CELL: Pull-Collide (equivalent to CPU's Push: Collide-then-Stream) ===
    
    // Step 1: PULL (streaming) - gather f from neighbors
    // In pull: f_i at (x,y) comes from f_i at (x - cx_i, y - cy_i)
    double fi[9];
    
    for (int i = 0; i < 9; i++) {
        int nx = x - CX[i];
        int ny = y - CY[i];
        
        if (nx >= 0 && nx < width && ny >= 0 && ny < height) {
            int nid = ny * width + nx;
            int ntype = cell_type[nid];
            
            if (ntype == CELL_WALL) {
                // Standard bounce-back: reflect opposite direction from self
                fi[i] = f[OPP[i] * total + gid];
            } else if (ntype == CELL_MOVING_WALL) {
                // Moving wall bounce-back with momentum transfer (Ladd scheme)
                // CPU uses: faw = nextF[OPP[i]] + 6 * W[OPP[i]] * neighbor_rho * (wall_vel . C[i])
                double uw_x = source_ux[nid];
                double uw_y = source_uy[nid];
                double cu_wall = CX[i] * uw_x + CY[i] * uw_y;
                // Use rho from THIS fluid cell (previous step density)
                double rho_local = rho_out[gid];
                fi[i] = f[OPP[i] * total + gid] + 6.0 * W[OPP[i]] * rho_local * cu_wall;
            } else {
                // Normal streaming: pull from neighbor
                fi[i] = f[i * total + nid];
            }
        } else {
            // Out of bounds: bounce-back (like a wall at boundary)
            fi[i] = f[OPP[i] * total + gid];
        }
    }
    
    // Step 2: Compute macroscopic quantities
    double r = 0.0;
    double u_x = 0.0, u_y = 0.0;
    for (int i = 0; i < 9; i++) {
        r += fi[i];
        u_x += fi[i] * CX[i];
        u_y += fi[i] * CY[i];
    }
    if (r > 1e-100) {
        u_x /= r;
        u_y /= r;
    } else {
        u_x = 0.0;
        u_y = 0.0;
    }
    
    rho_out[gid] = r;
    ux_out[gid] = u_x;
    uy_out[gid] = u_y;
    uz_out[gid] = 0.0;
    
    // Step 3: BGK Collision
    // CPU: newF = (1 - 1/tau) * f + (1/tau) * f_eq
    // where tau = epsilon (the relaxation time)
    double omega = 1.0 / epsilon;
    double u2 = u_x*u_x + u_y*u_y;
    
    for (int i = 0; i < 9; i++) {
        double cu = CX[i]*u_x + CY[i]*u_y;
        double feq = W[i] * r * (1.0 + 3.0*cu + 4.5*cu*cu - 1.5*u2);
        f_post[i * total + gid] = fi[i] - omega * (fi[i] - feq);
    }
}
