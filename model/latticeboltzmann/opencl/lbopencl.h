#ifndef LBOPENCL_H
#define LBOPENCL_H

#define CL_TARGET_OPENCL_VERSION 120
#include <CL/cl.h>
#include <string>
#include <vector>
#include <QDebug>

class Grid;

class LBOpenCL {
public:
    LBOpenCL(Grid* grid);
    ~LBOpenCL();

    bool initialize(bool useGPU = false);
    bool loadFromGrid();
    bool execute(int steps);
    bool saveToGrid();

    bool isInitialized() const { return initialized; }
    std::string getLastError() const { return lastError; }
    std::string getDeviceName() const { return deviceName; }

private:
    bool checkError(cl_int err, const std::string& op);
    bool buildProgram(const std::string& source);
    void releaseAll();

    bool initialized;
    Grid* grid;

    cl_platform_id platform;
    cl_device_id device;
    cl_context context;
    cl_command_queue queue;
    cl_program program;
    cl_kernel stepKernel;
    cl_kernel streamKernel;

    cl_mem fBuffer;
    cl_mem fPostBuffer;
    cl_mem cellTypeBuffer;
    cl_mem rhoBuffer;
    cl_mem uxBuffer;
    cl_mem uyBuffer;
    cl_mem uzBuffer;
    cl_mem sourceUXBuffer;
    cl_mem sourceUYBuffer;

    int width, height, length, totalCells;
    double epsilon;

    std::string lastError;
    std::string deviceName;

    std::vector<int> cellTypeHost;
    std::vector<double> sourceUXHost;
    std::vector<double> sourceUYHost;
};

#endif
