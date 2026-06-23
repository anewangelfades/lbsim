__constant int C[19][3] = {
    {0,0,0}, {1,0,0}, {-1,0,0}, {0,1,0}, {0,-1,0},
    {0,0,1}, {0,0,-1}, {1,1,0}, {-1,1,0}, {1,-1,0},
    {-1,-1,0}, {1,0,1}, {-1,0,1}, {1,0,-1}, {-1,0,-1},
    {0,1,1}, {0,-1,1}, {0,1,-1}, {0,-1,-1}
};

__constant double W[19] = {
    1.0/3.0,
    1.0/18.0, 1.0/18.0, 1.0/18.0, 1.0/18.0, 1.0/18.0, 1.0/18.0,
    1.0/36.0, 1.0/36.0, 1.0/36.0, 1.0/36.0, 1.0/36.0, 1.0/36.0,
    1.0/36.0, 1.0/36.0, 1.0/36.0, 1.0/36.0, 1.0/36.0, 1.0/36.0
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
    const double tau
) {
    int gid = get_global_id(0);
    int total_cells = width * height * length;
    if (gid >= total_cells) return;

    int x = gid % width;
    int y = (gid / width) % height;
    int z = gid / (width * height);
    int type = cell_type[gid];

    if (type == CELL_WALL) {
        for (int i = 0; i < 19; i++) {
            int opp = 0;
            switch(i) {
                case 0: opp = 0; break;
                case 1: opp = 2; break;
                case 2: opp = 1; break;
                case 3: opp = 4; break;
                case 4: opp = 3; break;
                case 5: opp = 6; break;
                case 6: opp = 5; break;
                case 7: opp = 10; break;
                case 8: opp = 9; break;
                case 9: opp = 8; break;
                case 10: opp = 7; break;
                case 11: opp = 14; break;
                case 12: opp = 13; break;
                case 13: opp = 12; break;
                case 14: opp = 11; break;
                case 15: opp = 18; break;
                case 16: opp = 17; break;
                case 17: opp = 16; break;
                case 18: opp = 15; break;
            }
            f_post[gid * 19 + i] = f[gid * 19 + opp];
        }
        rho[gid] = 0.0; ux[gid] = 0.0; uy[gid] = 0.0; uz[gid] = 0.0;
        return;
    }

    double fi[19], r = 0.0, u_x = 0.0, u_y = 0.0, u_z = 0.0;
    for (int i = 0; i < 19; i++) {
        fi[i] = f[gid * 19 + i];
        r += fi[i];
        u_x += fi[i] * C[i][0];
        u_y += fi[i] * C[i][1];
        u_z += fi[i] * C[i][2];
    }
    if (r > 1e-100) {
        u_x /= r; u_y /= r; u_z /= r;
    }

    rho[gid] = r;
    ux[gid] = u_x;
    uy[gid] = u_y;
    uz[gid] = u_z;

    double u2 = u_x*u_x + u_y*u_y + u_z*u_z;
    for (int i = 0; i < 19; i++) {
        double cu = C[i][0]*u_x + C[i][1]*u_y + C[i][2]*u_z;
        double feq = W[i] * r * (1.0 + 3.0*cu + 4.5*cu*cu - 1.5*u2);
        f_post[gid * 19 + i] = fi[i] - (fi[i] - feq) / tau;
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

    if (type == CELL_WALL) {
        for (int i = 0; i < 19; i++) {
            f[gid * 19 + i] = f_post[gid * 19 + i];
        }
        return;
    }

    for (int i = 0; i < 19; i++) {
        int nx = x - C[i][0];
        int ny = y - C[i][1];
        int nz = z - C[i][2];

        if (nx >= 0 && nx < width && ny >= 0 && ny < height && nz >= 0 && nz < length) {
            int nidx = nz * width * height + ny * width + nx;
            f[gid * 19 + i] = f_post[nidx * 19 + i];
        } else {
            f[gid * 19 + i] = f_post[gid * 19 + i];
        }
    }
}
