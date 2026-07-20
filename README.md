# LBSim (OpenCL Accelerated Fork)

**LBSim** is a 2D/3D fluid dynamics simulator based on the Lattice Boltzmann Method (LBM). 

This repository is a fork of the original [LBSim by Fabio Sussumu Komori](https://github.com/fabioskomori/lbsim). It introduces structural overhauls to the OpenCL integration, unlocking the full potential of GPU hardware acceleration for complex fluid dynamics simulations.

## 🚀 Major Improvements in this Fork

The original software featured an experimental OpenCL implementation that suffered from synchronization bugs, memory leaks, and severe performance bottlenecks on modern GPUs. This fork completely rewrites the GPU pipeline to achieve a 1:1 physics match with the CPU implementation, while running orders of magnitude faster.

### 1. Unified Collide & Stream Kernel
The original implementation used two separate OpenCL kernels for the `stream` and `collide` steps, which forced the GPU to constantly read and write to global memory twice per timestep. 
- **Improvement:** The kernels have been fused into a single `lb_collide_stream` kernel using a "Pull" streaming approach.
- **Benefit:** Global memory accesses are halved. The kernel now reads the pre-collision states from neighboring cells, computes the BGK collision operator, and writes the post-collision state directly in a single pass.

### 2. Ping-Pong Buffer Temporal Update
- **Improvement:** Implemented a zero-copy "Ping-Pong" buffer swapping mechanism in the host (`lbopencl.cpp`).
- **Benefit:** Eliminates the expensive explicit memory copy (`clEnqueueCopyBuffer`) or buffer-zeroing previously required at the end of every simulation step.

### 3. Structure of Arrays (SoA) Memory Layout for Coalesced Memory Access
- **Improvement:** The memory layout of the distribution functions `f` was refactored from an Array of Structures (AoS: `f[cell_id * 9 + direction]`) to a Structure of Arrays (SoA: `f[direction * total_cells + cell_id]`).
- **Benefit:** LBM is heavily memory-bound. This restructuring ensures that GPU threads in the same warp/wavefront read and write to contiguous blocks of VRAM (Memory Coalescing), drastically increasing the effective memory bandwidth and overall simulation speed.

### 4. Advanced OpenCL Boundary Conditions
The CPU boundary conditions were re-implemented natively inside the OpenCL kernel to ensure physics parity:
- **Moving Walls (Lid-Driven Cavity):** Added explicit support for `CELL_MOVING_WALL`. Implements Ladd's Bounce-Back logic where momentum from the moving wall is correctly transferred into the fluid based on the lattice weights and the wall's velocity vector.
- **Open and Source Cells:** Re-implemented the missing populations extrapolation logic for `CELL_OPEN` and `CELL_SOURCE` boundaries, ensuring non-reflective behaviors without introducing NaN instabilities from uninitialized memory.

### 5. Loop Unrolling and Macro Elimination
- **Improvement:** Removed convoluted preprocessor macros inside the OpenCL kernel that obscured index calculations. The main D2Q9 loops were fully unrolled.
- **Benefit:** Allows the OpenCL runtime compiler to assign discrete registers for each lattice direction and evaluate structural constants at compile-time, reducing register pressure and execution latency.

### 6. Dynamic GPU Buffer Reloading Bugfix
- **Improvement:** Fixed a critical state-machine bug in the UI/Host interaction where enabling the GPU *before* loading a simulation geometry resulted in the GPU continuing to simulate an empty 10x10x10 default grid, leading to visual corruption (magenta pixels) and NaN values.
- **Benefit:** The application now actively tracks grid changes (`Grid::reloadOpenCL()`) and seamlessly re-syncs the GPU VRAM buffers if a new image or text geometry is loaded while OpenCL is active.

---

## 🛠️ Build and Installation

### Prerequisites
- **Qt 5** (Required for the GUI and threading)
- **OpenCL SDK** (e.g., NVIDIA CUDA Toolkit, AMD APP SDK, or Intel OpenCL SDK)
- **C++ Compiler** (GCC, Clang, or MSVC)

### Build Instructions
1. Open `LatticeBoltzmann.pro` in **Qt Creator**.
2. Ensure that your OpenCL libraries are correctly linked in the `.pro` file (it is configured to link `-lOpenCL` on Linux/Mac or `OpenCL.lib` on Windows).
3. Build the project.

## 🖥️ Usage
1. Launch LBSim.
2. Load a geometry from an image or a text file (e.g., `File -> Load`).
3. Click the **Enable GPU** toggle in the toolbar to activate hardware acceleration.
4. Hit the **Start/Play** button to begin the simulation.

---
*For historical information on the original CPU implementation, see the [original wiki](https://github.com/fabioskomori/lbsim/wiki).*
