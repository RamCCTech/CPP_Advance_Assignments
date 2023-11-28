#pragma once

#ifdef __cplusplus
extern "C"
{
    #include <stdio.h>
    void printErr();
}

#else
#include <stdio.h>
void printErr();

#endif