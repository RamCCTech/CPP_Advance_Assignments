# Assignment9: Implemetation of sequential containers List

## Overview

This update involves replacing occurrences of the container type `std::vector` with `std::list` in the implementation. The primary goal is to adapt the code to use the `std::list` container for storing triangles, enhancing the flexibility of the program.

## Updates Made

1. **Container Type Change:**
    - Replaced occurrences of `std::vector<Triangle>` with `std::list<Triangle>` in the Reader class.
    - This change reflects the use of `std::list` for storing triangles, allowing for a more dynamic container choice.

2. **Translation Operation:**
    - Original: Used a loop for translating each point of every triangle individually.
    - Updated: Utilized `std::transform` with a lambda function to perform the translation operation on all points in each triangle concurrently.

## Usage

1. **Initialization:**
    - Create an instance of the `/Sketcher/src/Reader.cpp` class, providing the file path.

1. **Reading .stl File:**
    - Call the getTriangles function, passing a `std::list<Triangle>` to store the read triangles.

1. **Handling File Absence:**
    - If the specified file does not exist, a message will be displayed indicating the absence of the file.

1. **Triangle Processing:**
    - Triangles are processed and added to the provided `std::list<Triangle>`.
