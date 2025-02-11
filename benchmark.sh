#!/bin/bash

# Number of runs
RUNS=512

# Command to benchmark
COMMAND="./a.out"  # Replace with your actual command

for i in $(seq 1 $RUNS); do
    eval $COMMAND
done