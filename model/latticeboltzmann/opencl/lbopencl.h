#ifndef LBOPENCL_H
#define LBOPENCL_H

#include <CL/cl.h>
#include <vector>
#include <string>
#include <iostream>

class Grid;
class GridConfig;

class LBOpenCL {
public:
    LBOpenCL(Grid* grid);
    ~LBOpenCL();

    bool initialize(bool useGPU = true);
    bool isInitialized() const { return initialized; }
    std::string getDeviceName() const { return deviceName; }
    std::string getLastError() const { return lastError; }

    bool execute(int steps);
    bool loadFromGrid();
    bool saveToGrid();

private:
    bool initialized;
    Grid* grid;
    GridConfig* config;

    cl_platform_id platform;
    cl_device_id device;
    cl_context context;
    cl_command_queue queue;
    cl_program program;
    cl_kernel stepKernel;
    cl_kernel copyKernel;

    cl_mem fBuffer;
    cl_mem fNextBuffer;
    cl_mem cellTypeBuffer;
    cl_mem rhoBuffer;
    cl_mem uxBuffer;
    cl_mem uyBuffer;
    cl_mem uzBuffer;

    int width, height, length;
    int totalCells;
    double tau;

    std::string deviceName;
    std::string lastError;

    bool buildProgram(const std::string& kernelSource);
    bool checkError(cl_int err, const std::string& op);
    void releaseAll();
};

#endif
