#include<iostream>
#include<list>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    std::list<Triangle> triangles;
    Reader reader("unknown.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::list<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);

}