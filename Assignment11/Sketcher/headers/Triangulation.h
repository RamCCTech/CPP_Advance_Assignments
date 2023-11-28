#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include "Triangle.h"
#include "BBox.h"

class Triangulation
{

public:
    Triangulation(std::vector<Triangle> triangles);
    ~Triangulation();

    std::vector<Triangle> getTriangles();
    std::map<int,double> getAllTrianglePerimeter();
    
private:
    std::vector<Triangle> mTriangles;
    std::map<int,double> mTrianglesPerimeter;
    BBox mBBox;

    double distance(Point3D p1, Point3D p2);
};
