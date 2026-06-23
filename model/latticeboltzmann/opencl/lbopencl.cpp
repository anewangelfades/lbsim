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
#include <vector>
#include <string>

#define CELL_FLUID 0
#define CELL_WALL 1
#define CELL_SOURCE 2
#define CELL_OPEN 3

// D2Q9: 9 lattice directions (matches SCCell allocation)
#define NUM_DIR 9

LBOpenCL::LBOpenCL(Grid* g)
 : initialized(false), grid(g), platform(0), device(0),
 context(0), queue(0), program(0), stepKernel(0), streamKernel(0),
 fBuffer(0), fPostBuffer(0), cellTypeBuffer(0),
 rhoBuffer(0), uxBuffer(0), uyBuffer(0), uzBuffer(0),
 sourceUXBuffer(0), sourceUYBuffer(0),
 width(0), height(0), length(0), totalCells(0), epsilon(0.0) {
}

LBOpenCL::~LBOpenCL() {
 releaseAll();
}

void LBOpenCL::releaseAll() {
 if (stepKernel) clReleaseKernel(stepKernel);
 if (streamKernel) clReleaseKernel(streamKernel);
 if (program) clReleaseProgram(program);
 if (queue) clReleaseCommandQueue(queue);
 if (fBuffer) clReleaseMemObject(fBuffer);
 if (fPostBuffer) clReleaseMemObject(fPostBuffer);
 if (cellTypeBuffer) clReleaseMemObject(cellTypeBuffer);
 if (rhoBuffer) clReleaseMemObject(rhoBuffer);
 if (uxBuffer) clReleaseMemObject(uxBuffer);
 if (uyBuffer) clReleaseMemObject(uyBuffer);
 if (uzBuffer) clReleaseMemObject(uzBuffer);
 if (sourceUXBuffer) clReleaseMemObject(sourceUXBuffer);
 if (sourceUYBuffer) clReleaseMemObject(sourceUYBuffer);
 if (context) clReleaseContext(context);
 stepKernel = streamKernel = 0;
 program = 0;
 queue = 0;
 fBuffer = fPostBuffer = cellTypeBuffer = rhoBuffer = uxBuffer = uyBuffer = uzBuffer = 0;
 sourceUXBuffer = sourceUYBuffer = 0;
 context = 0;
 cellTypeHost.clear();
 sourceUXHost.clear();
 sourceUYHost.clear();
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

 streamKernel = clCreateKernel(program, "lb_stream", &err);
 if (!checkError(err, "clCreateKernel lb_stream")) return false;

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

 GridConfig* config = grid->getConfig();
 width = config->getWidth();
 height = config->getHeight();
 length = config->getLength();
 totalCells = width * height * length;
 epsilon = config->getEpsilons()[0];

 qDebug() << "OpenCL: Loading grid" << width << "x" << height << "x" << length << "=" << totalCells << "cells";

 if (totalCells <= 0 || totalCells > 100000000) {
 lastError = "Invalid grid size: " + std::to_string(totalCells);
 qDebug() << QString::fromStdString(lastError);
 return false;
 }

 cl_int err;
 size_t fSize = (size_t)totalCells * NUM_DIR * sizeof(double);
 size_t cellSize = (size_t)totalCells * sizeof(int);
 size_t macroSize = (size_t)totalCells * sizeof(double);
 size_t velSize = (size_t)totalCells * sizeof(double);

 qDebug() << "OpenCL: Allocating buffers...";

 fBuffer = clCreateBuffer(context, CL_MEM_READ_WRITE, fSize, nullptr, &err);
 if (!checkError(err, "clCreateBuffer fBuffer")) return false;

 fPostBuffer = clCreateBuffer(context, CL_MEM_READ_WRITE, fSize, nullptr, &err);
 if (!checkError(err, "clCreateBuffer fPostBuffer")) return false;

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

 sourceUXBuffer = clCreateBuffer(context, CL_MEM_READ_ONLY, velSize, nullptr, &err);
 if (!checkError(err, "clCreateBuffer sourceUXBuffer")) return false;

 sourceUYBuffer = clCreateBuffer(context, CL_MEM_READ_ONLY, velSize, nullptr, &err);
 if (!checkError(err, "clCreateBuffer sourceUYBuffer")) return false;

 qDebug() << "OpenCL: Buffers allocated successfully";

 std::vector<double> fHost((size_t)totalCells * NUM_DIR);
 cellTypeHost.resize((size_t)totalCells);
 sourceUXHost.resize((size_t)totalCells, 0.0);
 sourceUYHost.resize((size_t)totalCells, 0.0);

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
 MyVector3D u = cell->getU(0);
 sourceUXHost[idx] = u.getX();
 sourceUYHost[idx] = u.getY();
 } else if (dynamic_cast<OpenCell*>(cell)) {
 cellTypeHost[idx] = CELL_OPEN;
 } else {
 cellTypeHost[idx] = CELL_FLUID;
 }

 for (int d = 0; d < NUM_DIR; d++) {
 fHost[idx * NUM_DIR + d] = cell->getF(d, 0);
 }
 }
 }
 }

 qDebug() << "OpenCL: Writing to GPU buffers...";

 err = clEnqueueWriteBuffer(queue, fBuffer, CL_TRUE, 0, fSize, fHost.data(), 0, nullptr, nullptr);
 if (!checkError(err, "clEnqueueWriteBuffer fBuffer")) return false;

 err = clEnqueueWriteBuffer(queue, cellTypeBuffer, CL_TRUE, 0, cellSize, cellTypeHost.data(), 0, nullptr, nullptr);
 if (!checkError(err, "clEnqueueWriteBuffer cellTypeBuffer")) return false;

 err = clEnqueueWriteBuffer(queue, sourceUXBuffer, CL_TRUE, 0, velSize, sourceUXHost.data(), 0, nullptr, nullptr);
 if (!checkError(err, "clEnqueueWriteBuffer sourceUXBuffer")) return false;

 err = clEnqueueWriteBuffer(queue, sourceUYBuffer, CL_TRUE, 0, velSize, sourceUYHost.data(), 0, nullptr, nullptr);
 if (!checkError(err, "clEnqueueWriteBuffer sourceUYBuffer")) return false;

 clFinish(queue);

 qDebug() << "OpenCL: Setting kernel arguments...";

 err = clSetKernelArg(stepKernel, 0, sizeof(cl_mem), &fBuffer);
 if (!checkError(err, "clSetKernelArg step 0")) return false;
 err = clSetKernelArg(stepKernel, 1, sizeof(cl_mem), &fPostBuffer);
 if (!checkError(err, "clSetKernelArg step 1")) return false;
 err = clSetKernelArg(stepKernel, 2, sizeof(cl_mem), &cellTypeBuffer);
 if (!checkError(err, "clSetKernelArg step 2")) return false;
 err = clSetKernelArg(stepKernel, 3, sizeof(cl_mem), &rhoBuffer);
 if (!checkError(err, "clSetKernelArg step 3")) return false;
 err = clSetKernelArg(stepKernel, 4, sizeof(cl_mem), &uxBuffer);
 if (!checkError(err, "clSetKernelArg step 4")) return false;
 err = clSetKernelArg(stepKernel, 5, sizeof(cl_mem), &uyBuffer);
 if (!checkError(err, "clSetKernelArg step 5")) return false;
 err = clSetKernelArg(stepKernel, 6, sizeof(cl_mem), &uzBuffer);
 if (!checkError(err, "clSetKernelArg step 6")) return false;
 err = clSetKernelArg(stepKernel, 7, sizeof(int), &width);
 if (!checkError(err, "clSetKernelArg step 7")) return false;
 err = clSetKernelArg(stepKernel, 8, sizeof(int), &height);
 if (!checkError(err, "clSetKernelArg step 8")) return false;
 err = clSetKernelArg(stepKernel, 9, sizeof(int), &length);
 if (!checkError(err, "clSetKernelArg step 9")) return false;
 err = clSetKernelArg(stepKernel, 10, sizeof(double), &epsilon);
 if (!checkError(err, "clSetKernelArg step 10")) return false;
 err = clSetKernelArg(stepKernel, 11, sizeof(cl_mem), &sourceUXBuffer);
 if (!checkError(err, "clSetKernelArg step 11")) return false;
 err = clSetKernelArg(stepKernel, 12, sizeof(cl_mem), &sourceUYBuffer);
 if (!checkError(err, "clSetKernelArg step 12")) return false;

 err = clSetKernelArg(streamKernel, 0, sizeof(cl_mem), &fBuffer);
 if (!checkError(err, "clSetKernelArg stream 0")) return false;
 err = clSetKernelArg(streamKernel, 1, sizeof(cl_mem), &fPostBuffer);
 if (!checkError(err, "clSetKernelArg stream 1")) return false;
 err = clSetKernelArg(streamKernel, 2, sizeof(cl_mem), &cellTypeBuffer);
 if (!checkError(err, "clSetKernelArg stream 2")) return false;
 err = clSetKernelArg(streamKernel, 3, sizeof(int), &width);
 if (!checkError(err, "clSetKernelArg stream 3")) return false;
 err = clSetKernelArg(streamKernel, 4, sizeof(int), &height);
 if (!checkError(err, "clSetKernelArg stream 4")) return false;
 err = clSetKernelArg(streamKernel, 5, sizeof(int), &length);
 if (!checkError(err, "clSetKernelArg stream 5")) return false;

 qDebug() << "OpenCL: Grid loaded successfully!";
 return true;
}

bool LBOpenCL::execute(int steps) {
 if (!initialized || !grid) {
 lastError = "Not initialized";
 return false;
 }

 size_t localSize = 128;
 size_t globalSize = ((size_t)totalCells + localSize - 1) / localSize * localSize;

 for (int step = 0; step < steps; step++) {
 cl_int err = clEnqueueNDRangeKernel(queue, stepKernel, 1, nullptr, &globalSize, &localSize, 0, nullptr, nullptr);
 if (!checkError(err, "clEnqueueNDRangeKernel stepKernel")) return false;

 err = clEnqueueNDRangeKernel(queue, streamKernel, 1, nullptr, &globalSize, &localSize, 0, nullptr, nullptr);
 if (!checkError(err, "clEnqueueNDRangeKernel streamKernel")) return false;
 }

 cl_int err = clFinish(queue);
 if (!checkError(err, "clFinish")) return false;

 return true;
}

bool LBOpenCL::saveToGrid() {
 if (!initialized || !grid || cellTypeHost.empty()) {
 lastError = "Not initialized or no cell types loaded";
 return false;
 }

 std::vector<double> fHost((size_t)totalCells * NUM_DIR);

 cl_int err = clEnqueueReadBuffer(queue, fBuffer, CL_TRUE, 0, (size_t)totalCells * NUM_DIR * sizeof(double), fHost.data(), 0, nullptr, nullptr);
 if (!checkError(err, "clEnqueueReadBuffer")) return false;

 err = clFinish(queue);
 if (!checkError(err, "clFinish read")) return false;

 for (int z = 0; z < length; z++) {
 for (int y = 0; y < height; y++) {
 for (int x = 0; x < width; x++) {
 int idx = z * width * height + y * width + x;
 if (idx < 0 || idx >= totalCells) continue;

 // Skip walls - they are handled by CPU boundary logic
 if (cellTypeHost[idx] == CELL_WALL) continue;

 BaseCell* cell = grid->getGrid(y, x, z);
 if (!cell) continue;

 // Use dynamic_cast to SCCell which has setNextF
 SCCell* sc = dynamic_cast<SCCell*>(cell);
 if (sc) {
 for (int d = 0; d < NUM_DIR; d++) {
 sc->setNextF(d, fHost[idx * NUM_DIR + d], 0);
 }
 // Swap f and fNext to make the new data active
 sc->update();
 }
 }
 }
 }

 return true;
}
