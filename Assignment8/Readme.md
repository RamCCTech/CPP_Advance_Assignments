# Assignment8: Algorithms and Iterators

## Overview

This C++ code is part of a project involving transformations on a collection of triangles. The `/Sketcher/src/Transform.cpp` class is responsible for scaling and translating a vector of triangles. Initially, the code utilized loops for these operations, and the objective was to enhance it by incorporating algorithms and iterators.

## Updates Made

1. **Scaling Operation:**
    - Original: Used a loop to scale each point of every triangle individually.
    - Updated: Employed `std::transform` with a lambda function to apply the scaling operation to all points in each triangle simultaneously.

2. **Translation Operation:**
    - Original: Used a loop for translating each point of every triangle individually.
    - Updated: Utilized `std::transform` with a lambda function to perform the translation operation on all points in each triangle concurrently.

## Usage

1. **Initialization:**
    - Create an instance of the `/Sketcher/src/Transform.cpp` class, providing a vector of triangles.

2. **Scaling:**
    - Call the `scale` function with the desired scaling factor.
    - The scaling operation will be applied to all triangles simultaneously.

    **Code Snippet:**
    ```
    void Transform::scale(double scale)
    {
        BBox bbox(mTriangles);
        Point3D center=bbox.getCenter();

        auto scaleFunction = [this, scale](const Point3D& point) {
            return this->createScaledPoint(point, scale);
        };

        std::transform(std::begin(mTriangles), std::end(mTriangles), std::begin(mTriangles), scaleFunction);
        
        translate(center.x(),center.y(),center.z());
    }
    ```

3. **Translation:**
    - Call the `translate` function with the desired translation factor.
    - The translation operation will be applied to all triangles concurrently.

    **Code Snippet:**
    ```
    void Transform::translate(double transX, double transY, double transZ)
    {
        auto translateFunction = [this, transX, transY, transZ](const Point3D& point) {
            return this->createTranslatedPoint(point, transX, transY, transZ);
        };

        std::transform(std::begin(mTriangles), std::end(mTriangles), std::begin(mTriangles), translateFunction);
    }
    ```
