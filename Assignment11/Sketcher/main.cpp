#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"
#include "headers/Transform.h"

int main()
{
    std::vector<Triangle> triangles;
    Reader reader("resources/cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();

    Transform transform(outTriangles);
    transform.scale(2);

    writer.write("output/output.txt", outTriangles);

    std::cout << "Press any key to exit...";
    std::cin.ignore();  
    std::cin.get();
}