#include <iostream>
#include <algorithm> // for std::transform
#include <iterator>  // for std::begin, std::end
#include "../headers/Transform.h"
#include "../headers/Matrix.h"
#include "../headers/Point3D.h"
#include "../headers/BBox.h"

Transform::Transform(std::vector<Triangle>& triangles)
: mTriangles(triangles)
{
    
}

Transform::~Transform()
{
}

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

Point3D Transform::createScaledPoint(Point3D point, double scale)
{
    Matrix matrix;
    std::vector<std::vector<double>> scalingMatrix = matrix.createScaleMatrix(scale);
    std::vector<double> pointHomogeneous = {point.x(), point.y(), point.z(), 1.0};
    std::vector<double> scaledPointHomogeneous = matrix.multiplyMatrixVector(scalingMatrix, pointHomogeneous);

    double scaledX = scaledPointHomogeneous[0] / scaledPointHomogeneous[3];
    double scaledY = scaledPointHomogeneous[1] / scaledPointHomogeneous[3];
    double scaledZ = scaledPointHomogeneous[2] / scaledPointHomogeneous[3];

    return Point3D(scaledX, scaledY, scaledZ);
}

void Transform::translate(double transX, double transY, double transZ)
{
    auto translateFunction = [this, transX, transY, transZ](const Point3D& point) {
        return this->createTranslatedPoint(point, transX, transY, transZ);
    };

    std::transform(std::begin(mTriangles), std::end(mTriangles), std::begin(mTriangles), translateFunction);
}

Point3D Transform::createTranslatedPoint(Point3D point, double transX, double transY, double transZ)
{
    Matrix matrix;
    std::vector<std::vector<double>> transMatrix = matrix.createTranslationMatrix(transX, transY, transZ);
    std::vector<double> pointHomogeneous = {point.x(), point.y(), point.z(), 1.0};
    std::vector<double> transPointHomogeneous = matrix.multiplyMatrixVector(transMatrix, pointHomogeneous);
    return Point3D(transPointHomogeneous[0], transPointHomogeneous[1], transPointHomogeneous[2]);
}