# Assignment11: Using Map

## Overview

This update in the code involves calculating and storing the perimeter of each triangle in a `std::map`. The `Sketcher/src/Triangulation.cpp` class now provides a method, `getAllTrianglePerimeter()`, which returns a `std::map<int, double>` containing the index of each triangle along with its corresponding perimeter.

## Updates Made

    - Introduced a new member variable, `mTrianglesPerimeter`, of type `std::map<int, double>` to store triangle indices and their respective perimeters.
    - Modified the constructor to initialize the new member variable.
    - Implemented the `getAllTrianglePerimeter()` method to calculate and store the perimeter of each triangle in the `mTrianglesPerimeter` map.

## Usage

    - Create an instance of the Triangulation class by providing a vector of Triangle objects in the constructor.
    - Use the `getAllTrianglePerimeter()` method to obtain a `map` where the keys are triangle indices, and values are their corresponding `perimeters`.
    - Access the calculated perimeters as needed for further processing.
