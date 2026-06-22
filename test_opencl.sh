#!/bin/bash
# Test LBSim with tiny grid for OpenCL debugging

cd ~/lbsim_WORKING_OCL

echo "=== LBSim OpenCL Test ==="
echo ""
echo "1. Running with tiny grid (10x10x10) for OpenCL test..."
./LatticeBoltzmann &
PID=$!

sleep 3

echo ""
echo "2. Check if process is running..."
ps aux | grep LatticeBoltzmann | grep -v grep

echo ""
echo "3. Check for GPU log..."
if [ -f /tmp/lbsim_gpu.log ]; then
    cat /tmp/lbsim_gpu.log
else
    echo "No GPU log found yet"
fi

echo ""
echo "4. Check nvidia-smi..."
nvidia-smi --query-gpu=name,utilization.gpu,memory.used --format=csv

echo ""
echo "5. Kill test process..."
kill $PID 2>/dev/null

echo ""
echo "Test complete."
