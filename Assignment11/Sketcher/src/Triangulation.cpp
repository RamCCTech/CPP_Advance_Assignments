#include "../headers/Triangulation.h"
#include "../headers/Triangle.h"

Triangulation::Triangulation(std::vector<Triangle> triangles)
    : mBBox(triangles)
{
    mTriangles = triangles;
    mTrianglesPerimeter = getAllTrianglePerimeter();
}

Triangulation::~Triangulation()
{
}

std::vector<Triangle> Triangulation::getTriangles()
{
    return mTriangles;
}

std::map<int,double> Triangulation::getAllTrianglePerimeter()
{
    std::map<int,double> trianglesPerimeter;
    for (int i=0;i<mTriangles.size();i++)
    {
        Point3D p1 = mTriangles[i].p1();
        Point3D p2 = mTriangles[i].p2();
        Point3D p3 = mTriangles[i].p3();

        double l1 = distance(p1, p2);
        double l2 = distance(p2, p3);
        double l3 = distance(p1, p3);

        double perimeter = l1 + l2 + l3;
        trianglesPerimeter[i] = perimeter;
    }
    return trianglesPerimeter;
}

double Triangulation::distance(Point3D p1, Point3D p2)
{
    return sqrt(pow(p1.x() - p2.x(), 2) + pow(p1.y() - p2.y(), 2) + pow(p1.z() - p2.z(), 2));
}
