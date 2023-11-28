# Assignment5: Algorithm with Lambda Expression and String Output

## Overview

This C++ assignment requires the incorporation of a lambda expression in the `/Sketcher/src/Reader.cpp` file to define a function named `printFileNotFoundError`. The lambda expression should return a string, and this string is intended to be outputted to the user using `std::cout`.

## Updated Function Definition

1. **Function File:**
    - Function Definition: ``/Sketcher/src/Reader.cpp`
2. **Lambda Expression:**
    - Define a lambda expression named `printFileNotFoundError` with no capture clause.
    - The lambda expression returns a string indicating a file not found error.

## Usage

1. **Lambda Expression in Action:**
    - Call the lambda expression `printFileNotFoundError` in the `Reader.cpp` file.
2. **Output to User:**
    - Use `std::cout` to output the string returned by the lambda expression.

e.g. In `/Sketcher/src/Reader.cpp`

```
auto printFileNotFoundError = []()
{
    std::string msg = "Error! File Not Found!";
    return msg;
};
```
