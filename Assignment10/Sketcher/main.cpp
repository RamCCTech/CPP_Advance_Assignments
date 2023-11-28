#include<iostream>
#include<deque>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    std::deque<Triangle> triangles;
    Reader reader("unknown.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::deque<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);

}