#pragma once
#include <vector>
#include <string>
#include "Triangle.h"

class Reader {
public:
    Reader(std::string filePath);
    ~Reader();

    void getTriangles(std::vector<Triangle>& triangles);
    std::string displayFileMissingError();

private:
    std::string mFilePath;
};
