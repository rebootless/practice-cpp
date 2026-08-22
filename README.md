# Practice-CPP

A collection of C++ programming exercises and solutions for learning and practicing core language features.

## Overview

Each task is organized in its own directory with:
- `main.cpp` — solution code
- `CMakeLists.txt` — build configuration

## Build and Run

```bash
# Build a specific task (change only TASK)
TASK=01; cd task-$TASK && mkdir -p build && cd build && cmake .. && cmake --build . && ./task-$TASK
```
