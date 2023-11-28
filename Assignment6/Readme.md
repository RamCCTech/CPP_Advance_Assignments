# Assignment6: Lambda Expression with Capture Clause and Mutable Implementation

## Overview

This assignment focuses on the implementation of a lambda expression within the `Sketcher/src/Reader`.cpp file to define a function named `printFileNotFoundError`. The lambda expression returns a string, which is referenced from the user function stack using the `&` reference operator in the Capture Clause. Additionally, the `mutable` keyword is employed to allow modifications to the captured string within the Lambda Expression. The resulting string is then outputted to the user via `std::cout`.

## Updated Function Definition

1. **Function File:**
    - File: `Sketcher/src/Reader.cpp`
    - Function Definition: `void Reader::getTriangles(std::vector<Triangle> &triangles)`

2. **Lambda Expression:**
    - Define a lambda expression named `printFileNotFoundError` with a capture clause as`&msg`.
    - Utilize the `mutable` keyword to indicate that variables in the capture clause are mutable, not constant.
    - The use of the `mutable` keyword allows the value of the string to be changed from `std::string msg = "File error" to msg = "Error! File Not Found!"`.
    - The lambda expression returns a string indicating a file not found error.

2. **Code Snippet:**
```
auto printFileNotFoundError = [&msg]() mutable
{
    msg = "Error! File Not Found!";
    return msg;
};

```

## Usage

1. **Lambda Expression in Action:**
    - Define `std::string msg = "File error"`.
    - Call the lambda expression `printFileNotFoundError` in the `Reader.cpp` file.

2. **Output to User:**
    - Use `std::cout` to output the string returned by the lambda expression.
    - The output will be changed to `"Error! File not Found!"`.
