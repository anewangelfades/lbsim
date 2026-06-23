__constant int C[9][2] = {
    {0,0}, {1,0}, {0,1}, {-1,0}, {0,-1},
    {1,1}, {-1,1}, {-1,-1}, {1,-1}
};

__constant double W[9] = {
    4.0/9.0,
    1.0/9.0, 1.0/9.0, 1.0/9.0, 1.0/9.0,
    1.0/36.0, 1.0/36.0, 1.0/36.0, 1.0/36.0
};

#define CELL_FLUID 0
#define CELL_WALL 1
#define CELL_SOURCE 2
#define CELL_OPEN 3

__kernel void lb_step(
    __global double* f,
    __global double* f_post,
    __global int* cell_type,
    __global double* rho,
    __global double* ux,
    __global double* uy,
    __global double* uz,
    const int width,
    const int height,
    const int length,
    const double epsilon,
    __global double* source_ux,
    __global double* source_uy
) {
    int gid = get_global_id(0);
    int total_cells = width * height * length;
    if (gid >= total_cells) return;

    int x = gid % width;
    int y = (gid / width) % height;
    int z = gid / (width * height);
    int type = cell_type[gid];

    // Wall cells: bounce-back (swap opposite directions)
    if (type == CELL_WALL) {
        f_post[gid * 9 + 0] = f[gid * 9 + 0];
        f_post[gid * 9 + 1] = f[gid * 9 + 3];
        f_post[gid * 9 + 2] = f[gid * 9 + 4];
        f_post[gid * 9 + 3] = f[gid * 9 + 1];
        f_post[gid * 9 + 4] = f[gid * 9 + 2];
        f_post[gid * 9 + 5] = f[gid * 9 + 7];
        f_post[gid * 9 + 6] = f[gid * 9 + 8];
        f_post[gid * 9 + 7] = f[gid * 9 + 5];
        f_post[gid * 9 + 8] = f[gid * 9 + 6];
        rho[gid] = 0.0; ux[gid] = 0.0; uy[gid] = 0.0; uz[gid] = 0.0;
        return;
    }

    // Source cells: impose equilibrium with prescribed velocity (like CPU preUpdate)
    if (type == CELL_SOURCE) {
        double u_x = source_ux[gid];
        double u_y = source_uy[gid];
        double r = 1.0;
        double u2 = u_x*u_x + u_y*u_y;
        for (int i = 0; i < 9; i++) {
            double cu = C[i][0]*u_x + C[i][1]*u_y;
            f_post[gid * 9 + i] = W[i] * r * (1.0 + 3.0*cu + 4.5*cu*cu - 1.5*u2);
        }
        rho[gid] = r; ux[gid] = u_x; uy[gid] = u_y; uz[gid] = 0.0;
        return;
    }

    // Fluid and Open cells: standard BGK collision with epsilon (omega)
    double fi[9], r = 0.0, u_x = 0.0, u_y = 0.0;
    for (int i = 0; i < 9; i++) {
        fi[i] = f[gid * 9 + i];
        r += fi[i];
        u_x += fi[i] * C[i][0];
        u_y += fi[i] * C[i][1];
    }
    if (r > 1e-100) {
        u_x /= r;
        u_y /= r;
    }

    rho[gid] = r;
    ux[gid] = u_x;
    uy[gid] = u_y;
    uz[gid] = 0.0;

    double u2 = u_x*u_x + u_y*u_y;
    for (int i = 0; i < 9; i++) {
        double cu = C[i][0]*u_x + C[i][1]*u_y;
        double feq = W[i] * r * (1.0 + 3.0*cu + 4.5*cu*cu - 1.5*u2);
        // epsilon = omega (relaxation parameter), NOT tau
        f_post[gid * 9 + i] = fi[i] - epsilon * (fi[i] - feq);
    }
}

__kernel void lb_stream(
    __global double* f,
    __global double* f_post,
    __global int* cell_type,
    const int width,
    const int height,
    const int length
) {
    int gid = get_global_id(0);
    int total_cells = width * height * length;
    if (gid >= total_cells) return;

    int x = gid % width;
    int y = (gid / width) % height;
    int z = gid / (width * height);
    int type = cell_type[gid];

    // Wall and Source cells: copy f_post to f WITHOUT streaming
    // Source cells must keep their imposed equilibrium (like CPU)
    if (type == CELL_WALL || type == CELL_SOURCE) {
        for (int i = 0; i < 9; i++) {
            f[gid * 9 + i] = f_post[gid * 9 + i];
        }
        return;
    }

    // Standard streaming for Fluid and Open cells
    for (int i = 0; i < 9; i++) {
        int nx = x - C[i][0];
        int ny = y - C[i][1];

        if (nx >= 0 && nx < width && ny >= 0 && ny < height) {
            int nidx = z * width * height + ny * width + nx;
            f[gid * 9 + i] = f_post[nidx * 9 + i];
        } else {
            // Out of bounds: self-streaming (should not happen if borders are walls)
            f[gid * 9 + i] = f_post[gid * 9 + i];
        }
    }
}
