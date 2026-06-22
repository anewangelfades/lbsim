#include "lbopencl.h"
#include "../lbgrid.h"
#include "../gridconfig.h"
#include "../sccell.h"
#include "../basecell.h"
#include "../boundary/wallcell.h"
#include "../boundary/sourcecell.h"
#include "../boundary/opencell.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <QDebug>

#define CELL_FLUID 0
#define CELL_WALL 1
#define CELL_SOURCE 2
#define CELL_OPEN 3

LBOpenCL::LBOpenCL(Grid* g) 
    : initialized(false), grid(g), platform(0), device(0), 
      context(0), queue(0), program(0), stepKernel(0), copyKernel(0),
      fBuffer(0), fNextBuffer(0), cellTypeBuffer(0),
      rhoBuffer(0), uxBuffer(0), uyBuffer(0), uzBuffer(0),
      width(0), height(0), length(0), totalCells(0), tau(0.0) {
}

LBOpenCL::~LBOpenCL() {
    releaseAll();
}

void LBOpenCL::releaseAll() {
    if (stepKernel) clReleaseKernel(stepKernel);
    if (copyKernel) clReleaseKernel(copyKernel);
    if (program) clReleaseProgram(program);
    if (queue) clReleaseCommandQueue(queue);
    if (fBuffer) clReleaseMemObject(fBuffer);
    if (fNextBuffer) clReleaseMemObject(fNextBuffer);
    if (cellTypeBuffer) clReleaseMemObject(cellTypeBuffer);
    if (rhoBuffer) clReleaseMemObject(rhoBuffer);
    if (uxBuffer) clReleaseMemObject(uxBuffer);
    if (uyBuffer) clReleaseMemObject(uyBuffer);
    if (uzBuffer) clReleaseMemObject(uzBuffer);
    if (context) clReleaseContext(context);
    stepKernel = copyKernel = 0;
    program = 0;
    queue = 0;
    fBuffer = fNextBuffer = cellTypeBuffer = rhoBuffer = uxBuffer = uyBuffer = uzBuffer = 0;
    context = 0;
}

bool LBOpenCL::checkError(cl_int err, const std::string& op) {
    if (err != CL_SUCCESS) {
        lastError = op + " failed with error " + std::to_string(err);
        qDebug() << "OpenCL ERROR:" << QString::fromStdString(lastError);
        return false;
    }
    return true;
}

bool LBOpenCL::buildProgram(const std::string& source) {
    const char* src = source.c_str();
    size_t len = source.length();
    cl_int err;

    program = clCreateProgramWithSource(context, 1, &src, &len, &err);
    if (!checkError(err, "clCreateProgramWithSource")) return false;

    err = clBuildProgram(program, 1, &device, "-cl-fast-relaxed-math", nullptr, nullptr);
    if (err != CL_SUCCESS) {
        size_t logSize;
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG, 0, nullptr, &logSize);
        std::vector<char> log(logSize);
        clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG, logSize, log.data(), nullptr);
        lastError = std::string("Kernel compilation failed:\n") + log.data();
        qDebug() << "OpenCL Build Error:" << log.data();
        return false;
    }

    qDebug() << "Kernel compiled successfully";

    stepKernel = clCreateKernel(program, "lb_step", &err);
    if (!checkError(err, "clCreateKernel lb_step")) return false;

    copyKernel = clCreateKernel(program, "copy_buffer", &err);
    if (!checkError(err, "clCreateKernel copy_buffer")) return false;

    qDebug() << "Kernels created successfully";
    return true;
}

bool LBOpenCL::initialize(bool useGPU) {
    cl_int err;

    qDebug() << "OpenCL: Getting platforms...";
    cl_uint numPlatforms;
    err = clGetPlatformIDs(0, nullptr, &numPlatforms);
    if (!checkError(err, "clGetPlatformIDs(0)") || numPlatforms == 0) {
        lastError = "No OpenCL platforms found";
        return false;
    }

    std::vector<cl_platform_id> platforms(numPlatforms);
    err = clGetPlatformIDs(numPlatforms, platforms.data(), nullptr);
    if (!checkError(err, "clGetPlatformIDs")) return false;
    platform = platforms[0];

    qDebug() << "OpenCL: Found" << numPlatforms << "platforms";

    cl_device_type devType = useGPU ? CL_DEVICE_TYPE_GPU : CL_DEVICE_TYPE_CPU;
    cl_uint numDevices;
    err = clGetDeviceIDs(platform, devType, 0, nullptr, &numDevices);

    if (err != CL_SUCCESS || numDevices == 0) {
        qDebug() << "No GPU devices found, trying CPU...";
        devType = CL_DEVICE_TYPE_CPU;
        err = clGetDeviceIDs(platform, devType, 0, nullptr, &numDevices);
        if (!checkError(err, "clGetDeviceIDs(CPU)") || numDevices == 0) {
            lastError = "No OpenCL devices found (GPU or CPU)";
            return false;
        }
    }

    std::vector<cl_device_id> devices(numDevices);
    err = clGetDeviceIDs(platform, devType, numDevices, devices.data(), nullptr);
    if (!checkError(err, "clGetDeviceIDs")) return false;
    device = devices[0];

    size_t nameSize;
    clGetDeviceInfo(device, CL_DEVICE_NAME, 0, nullptr, &nameSize);
    std::vector<char> name(nameSize);
    clGetDeviceInfo(device, CL_DEVICE_NAME, nameSize, name.data(), nullptr);
    deviceName = std::string(name.data());
    qDebug() << "OpenCL device:" << QString::fromStdString(deviceName);

    qDebug() << "OpenCL: Creating context...";
    context = clCreateContext(nullptr, 1, &device, nullptr, nullptr, &err);
    if (!checkError(err, "clCreateContext")) return false;

    qDebug() << "OpenCL: Creating command queue...";
    queue = clCreateCommandQueue(context, device, 0, &err);
    if (!checkError(err, "clCreateCommandQueue")) return false;

    qDebug() << "OpenCL: Loading kernel...";
    std::ifstream kfile("model/latticeboltzmann/opencl/lb_kernel.cl");
    if (!kfile.is_open()) {
        lastError = "Cannot open kernel file: model/latticeboltzmann/opencl/lb_kernel.cl";
        qDebug() << QString::fromStdString(lastError);
        return false;
    }
    std::stringstream kbuf;
    kbuf << kfile.rdbuf();

    if (!buildProgram(kbuf.str())) {
        return false;
    }

    initialized = true;
    qDebug() << "OpenCL initialization complete!";
    return true;
}

bool LBOpenCL::loadFromGrid() {
    if (!initialized) {
        lastError = "OpenCL not initialized";
        return false;
    }

    config = grid->getConfig();
    width = config->getWidth();
    height = config->getHeight();
    length = config->getLength();
    totalCells = width * height * length;
    tau = config->getEpsilons()[0];

    qDebug() << "OpenCL: Loading grid" << width << "x" << height << "x" << length << "=" << totalCells << "cells";

    if (totalCells <= 0 || totalCells > 100000000) {
        lastError = "Invalid grid size: " + std::to_string(totalCells);
        qDebug() << QString::fromStdString(lastError);
        return false;
    }

    cl_int err;
    size_t fSize = (size_t)totalCells * 19 * sizeof(double);
    size_t cellSize = (size_t)totalCells * sizeof(int);
    size_t macroSize = (size_t)totalCells * sizeof(double);

    qDebug() << "OpenCL: Allocating buffers...";

    fBuffer = clCreateBuffer(context, CL_MEM_READ_WRITE, fSize, nullptr, &err);
    if (!checkError(err, "clCreateBuffer fBuffer")) return false;

    fNextBuffer = clCreateBuffer(context, CL_MEM_READ_WRITE, fSize, nullptr, &err);
    if (!checkError(err, "clCreateBuffer fNextBuffer")) return false;

    cellTypeBuffer = clCreateBuffer(context, CL_MEM_READ_ONLY, cellSize, nullptr, &err);
    if (!checkError(err, "clCreateBuffer cellTypeBuffer")) return false;

    rhoBuffer = clCreateBuffer(context, CL_MEM_WRITE_ONLY, macroSize, nullptr, &err);
    if (!checkError(err, "clCreateBuffer rhoBuffer")) return false;

    uxBuffer = clCreateBuffer(context, CL_MEM_WRITE_ONLY, macroSize, nullptr, &err);
    if (!checkError(err, "clCreateBuffer uxBuffer")) return false;

    uyBuffer = clCreateBuffer(context, CL_MEM_WRITE_ONLY, macroSize, nullptr, &err);
    if (!checkError(err, "clCreateBuffer uyBuffer")) return false;

    uzBuffer = clCreateBuffer(context, CL_MEM_WRITE_ONLY, macroSize, nullptr, &err);
    if (!checkError(err, "clCreateBuffer uzBuffer")) return false;

    qDebug() << "OpenCL: Buffers allocated successfully";

    // Allocate and fill host buffers
    std::vector<double> fHost((size_t)totalCells * 19);
    std::vector<int> cellTypeHost((size_t)totalCells);

    qDebug() << "OpenCL: Copying grid data to host buffers...";

    for (int z = 0; z < length; z++) {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                int idx = z * width * height + y * width + x;
                if (idx < 0 || idx >= totalCells) {
                    qDebug() << "INDEX OUT OF BOUNDS:" << idx << "at" << x << y << z;
                    continue;
                }
                BaseCell* cell = grid->getGrid(y, x, z);

                if (!cell) {
                    cellTypeHost[idx] = CELL_WALL;
                    continue;
                }

                if (dynamic_cast<WallCell*>(cell)) {
                    cellTypeHost[idx] = CELL_WALL;
                } else if (dynamic_cast<SourceCell*>(cell)) {
                    cellTypeHost[idx] = CELL_SOURCE;
                } else if (dynamic_cast<OpenCell*>(cell)) {
                    cellTypeHost[idx] = CELL_OPEN;
                } else {
                    cellTypeHost[idx] = CELL_FLUID;
                }

                for (int d = 0; d < 19; d++) {
                    fHost[idx * 19 + d] = cell->getF(d, 0);
                }
            }
        }
    }

    qDebug() << "OpenCL: Writing to GPU buffers...";

    err = clEnqueueWriteBuffer(queue, fBuffer, CL_TRUE, 0, fSize, fHost.data(), 0, nullptr, nullptr);
    if (!checkError(err, "clEnqueueWriteBuffer fBuffer")) return false;

    err = clEnqueueWriteBuffer(queue, cellTypeBuffer, CL_TRUE, 0, cellSize, cellTypeHost.data(), 0, nullptr, nullptr);
    if (!checkError(err, "clEnqueueWriteBuffer cellTypeBuffer")) return false;

    clFinish(queue);

    qDebug() << "OpenCL: Setting kernel arguments...";

    err = clSetKernelArg(stepKernel, 0, sizeof(cl_mem), &fBuffer);
    if (!checkError(err, "clSetKernelArg 0")) return false;
    err = clSetKernelArg(stepKernel, 1, sizeof(cl_mem), &fNextBuffer);
    if (!checkError(err, "clSetKernelArg 1")) return false;
    err = clSetKernelArg(stepKernel, 2, sizeof(cl_mem), &cellTypeBuffer);
    if (!checkError(err, "clSetKernelArg 2")) return false;
    err = clSetKernelArg(stepKernel, 3, sizeof(cl_mem), &rhoBuffer);
    if (!checkError(err, "clSetKernelArg 3")) return false;
    err = clSetKernelArg(stepKernel, 4, sizeof(cl_mem), &uxBuffer);
    if (!checkError(err, "clSetKernelArg 4")) return false;
    err = clSetKernelArg(stepKernel, 5, sizeof(cl_mem), &uyBuffer);
    if (!checkError(err, "clSetKernelArg 5")) return false;
    err = clSetKernelArg(stepKernel, 6, sizeof(cl_mem), &uzBuffer);
    if (!checkError(err, "clSetKernelArg 6")) return false;
    err = clSetKernelArg(stepKernel, 7, sizeof(int), &width);
    if (!checkError(err, "clSetKernelArg 7")) return false;
    err = clSetKernelArg(stepKernel, 8, sizeof(int), &height);
    if (!checkError(err, "clSetKernelArg 8")) return false;
    err = clSetKernelArg(stepKernel, 9, sizeof(int), &length);
    if (!checkError(err, "clSetKernelArg 9")) return false;
    err = clSetKernelArg(stepKernel, 10, sizeof(double), &tau);
    if (!checkError(err, "clSetKernelArg 10")) return false;

    err = clSetKernelArg(copyKernel, 0, sizeof(cl_mem), &fBuffer);
    if (!checkError(err, "clSetKernelArg copy 0")) return false;
    err = clSetKernelArg(copyKernel, 1, sizeof(cl_mem), &fNextBuffer);
    if (!checkError(err, "clSetKernelArg copy 1")) return false;
    err = clSetKernelArg(copyKernel, 2, sizeof(int), &totalCells);
    if (!checkError(err, "clSetKernelArg copy 2")) return false;

    qDebug() << "OpenCL: Grid loaded successfully!";
    return true;
}

bool LBOpenCL::execute(int steps) {
    if (!initialized || !grid) {
        lastError = "Not initialized";
        return false;
    }

    size_t globalSize = (size_t)totalCells;
    size_t localSize = 256;

    for (int step = 0; step < steps; step++) {
        cl_int err = clEnqueueNDRangeKernel(queue, stepKernel, 1, nullptr, &globalSize, &localSize, 0, nullptr, nullptr);
        if (!checkError(err, "clEnqueueNDRangeKernel stepKernel")) return false;

        size_t copyGlobal = (size_t)totalCells * 19;
        err = clEnqueueNDRangeKernel(queue, copyKernel, 1, nullptr, &copyGlobal, &localSize, 0, nullptr, nullptr);
        if (!checkError(err, "clEnqueueNDRangeKernel copyKernel")) return false;
    }

    cl_int err = clFinish(queue);
    if (!checkError(err, "clFinish")) return false;

    return true;
}

bool LBOpenCL::saveToGrid() {
    if (!initialized || !grid) {
        lastError = "Not initialized";
        return false;
    }

    std::vector<double> fHost((size_t)totalCells * 19);

    cl_int err = clEnqueueReadBuffer(queue, fBuffer, CL_TRUE, 0, (size_t)totalCells * 19 * sizeof(double), fHost.data(), 0, nullptr, nullptr);
    if (!checkError(err, "clEnqueueReadBuffer")) return false;

    err = clFinish(queue);
    if (!checkError(err, "clFinish read")) return false;

    for (int z = 0; z < length; z++) {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                int idx = z * width * height + y * width + x;
                if (idx < 0 || idx >= totalCells) continue;

                BaseCell* cell = grid->getGrid(y, x, z);
                if (cell && cell->isFluid()) {
                    for (int d = 0; d < 19; d++) {
                        cell->setNextF(d, fHost[idx * 19 + d], 0);
                    }
                }
            }
        }
    }

    return true;
}
