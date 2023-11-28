# Assignment3: File Handling in C++ Part1

## Overview

This assignment focuses on file handling in C++ to read and process triangle data from a file, and the implementation is divided between two files: `/Sketcher/src/Reader.cpp` and `/Sketcher/src/Writer.cpp`. The tasks involve leveraging the `getline()` function, utilizing `istringstream` for string parsing, instantiating  `Point3D` objects, and populating a vector of `Triangle` objects. The specific goal is to read only the `vertex` values from a .stl file.

## Implementation Steps

1. **Implemented getline() function in getTriangles() in location `Sketcher\Updated Sketchers\src\Reader.cpp`**.
2. **Used an istringstream to parse the string in location `Sketcher\Updated Sketchers\src\Reader.cpp`**.
3. **Taken all values and pass each (x, y, z) values to the point3D class object in location `Sketcher\Updated Sketchers\src\Reader.cpp`**.
4. **Added that object in the Triangle class type vector in location `Sketcher\Updated Sketchers\src\Reader.cpp`**.
**Used a range-for loop to print out the data from each object in write() function in location `Sketcher\Updated Sketchers\src\Writer.cpp`**.
