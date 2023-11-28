# Assignment13: Using extern keyword

## Overview

The code involves the use of the `extern` keyword in a C++ program. The purpose of using `extern` is to declare a function prototype that is implemented in a C source file (`printErr.c`) and utilized in a C++ source file (`PrintError.cpp`). The shared functionality is a simple function that prints an error message.

## Updates Made

1. **Header File (PrintError.h):**
    - Declared a function prototype using `extern` to indicate that the function is defined externally (in C source file).
    - Ensured that the function prototype is enclosed in an `extern "C"` block when compiled with a C++ compiler to prevent C++ name mangling.

2. **Source Files (PrintError.cpp and printErr.c):**
    - Implemented the `printErr` function in the `PrintError.cpp` file.
    - In the `printErr.c` file, included the standard input-output header and provided the implementation for the `printErr` function.

## Usage ##
1. ** **
    - To use the functionality in a C++ program, include the `PrintError.h` header file.
    - The `printErr` function can then be called in the C++ source code.
    - The actual implementation of `printErr` is separated into the `printErr.c` file, providing modularity.
