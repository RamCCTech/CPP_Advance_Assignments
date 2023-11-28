#pragma once
#include<list>
#include<string>
#include "Triangle.h"
class Writer
{
public:
    Writer();
    ~Writer();

    void write(std::string filePath ,std::list<Triangle>& triangles);

};