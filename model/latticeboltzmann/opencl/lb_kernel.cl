// lb_kernel.cl
// OpenCL kernel for D3Q19 Lattice Boltzmann Method
// Optimized for GPU execution

// D3Q19 lattice directions
__constant int C[19][3] = {
    {0, 0, 0},    // 0: rest
    {1, 0, 0},    // 1: +x
    {-1, 0, 0},   // 2: -x
    {0, 1, 0},    // 3: +y
    {0, -1, 0},   // 4: -y
    {0, 0, 1},    // 5: +z
    {0, 0, -1},   // 6: -z
    {1, 1, 0},    // 7
    {-1, 1, 0},   // 8
    {1, -1, 0},   // 9
    {-1, -1, 0},  // 10
    {1, 0, 1},    // 11
    {-1, 0, 1},   // 12
    {1, 0, -1},   // 13
    {-1, 0, -1},  // 14
    {0, 1, 1},    // 15
    {0, -1, 1},   // 16
    {0, 1, -1},   // 17
    {0, -1, -1}   // 18
};

__constant double W[19] = {
    1.0/3.0,      // 0
    1.0/18.0,     // 1-6
    1.0/18.0,
    1.0/18.0,
    1.0/18.0,
    1.0/18.0,
    1.0/18.0,
    1.0/36.0,     // 7-18
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0,
    1.0/36.0
};

// Cell types
#define CELL_FLUID 0
#define CELL_WALL 1
#define CELL_SOURCE 2
#define CELL_OPEN 3

// Collision and streaming kernel
// Each work item processes one cell
__kernel void lb_step(
    __global double* f,           // Current distribution functions [cell*19 + dir]
    __global double* f_next,      // Next distribution functions
    __global int* cell_type,      // Cell type
    __global double* rho,         // Density output
    __global double* ux,          // Velocity x output
    __global double* uy,          // Velocity y output
    __global double* uz,          // Velocity z output
    const int width,
    const int height,
    const int length,
    const double tau              // Relaxation time
) {
    int gid = get_global_id(0);
    int total_cells = width * height * length;

    if (gid >= total_cells) return;

    // Compute 3D coordinates from linear index
    int x = gid % width;
    int y = (gid / width) % height;
    int z = gid / (width * height);

    int type = cell_type[gid];

    // Wall boundary - bounce-back
    if (type == CELL_WALL) {
        for (int i = 0; i < 19; i++) {
            int opposite;
            switch(i) {
                case 0: opposite = 0; break;
                case 1: opposite = 2; break;
                case 2: opposite = 1; break;
                case 3: opposite = 4; break;
                case 4: opposite = 3; break;
                case 5: opposite = 6; break;
                case 6: opposite = 5; break;
                case 7: opposite = 10; break;
                case 8: opposite = 9; break;
                case 9: opposite = 8; break;
                case 10: opposite = 7; break;
                case 11: opposite = 14; break;
                case 12: opposite = 13; break;
                case 13: opposite = 12; break;
                case 14: opposite = 11; break;
                case 15: opposite = 18; break;
                case 16: opposite = 17; break;
                case 17: opposite = 16; break;
                case 18: opposite = 15; break;
            }
            f_next[gid * 19 + i] = f[gid * 19 + opposite];
        }

        rho[gid] = 0.0;
        ux[gid] = 0.0;
        uy[gid] = 0.0;
        uz[gid] = 0.0;
        return;
    }

    // Fluid cell - collision and streaming
    double fi[19];
    double r = 0.0;
    double u_x = 0.0;
    double u_y = 0.0;
    double u_z = 0.0;

    // Load distribution functions and compute macroscopic variables
    for (int i = 0; i < 19; i++) {
        fi[i] = f[gid * 19 + i];
        r += fi[i];
        u_x += fi[i] * C[i][0];
        u_y += fi[i] * C[i][1];
        u_z += fi[i] * C[i][2];
    }

    u_x /= r;
    u_y /= r;
    u_z /= r;

    // Store macroscopic variables
    rho[gid] = r;
    ux[gid] = u_x;
    uy[gid] = u_y;
    uz[gid] = u_z;

    // Collision (BGK) + Streaming
    double u2 = u_x * u_x + u_y * u_y + u_z * u_z;

    for (int i = 0; i < 19; i++) {
        double cu = C[i][0] * u_x + C[i][1] * u_y + C[i][2] * u_z;
        double feq = W[i] * r * (1.0 + 3.0 * cu + 4.5 * cu * cu - 1.5 * u2);
        double f_post = fi[i] - (fi[i] - feq) / tau;

        // Streaming
        int nx = x + C[i][0];
        int ny = y + C[i][1];
        int nz = z + C[i][2];

        if (nx >= 0 && nx < width && ny >= 0 && ny < height && nz >= 0 && nz < length) {
            int nidx = nz * width * height + ny * width + nx;
            f_next[nidx * 19 + i] = f_post;
        }
        // If out of bounds, the distribution is lost (open boundary)
    }
}

// Copy kernel: f_next -> f
__kernel void copy_buffer(
    __global double* f,
    __global double* f_next,
    const int total_cells
) {
    int gid = get_global_id(0);
    int n = total_cells * 19;
    if (gid < n) {
        f[gid] = f_next[gid];
    }
}
