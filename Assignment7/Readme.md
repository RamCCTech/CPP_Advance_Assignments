# Assignment7: Lambda Expression with Generalized Capture and Initialization

## Overview

This assignment involves the implementation of a lambda expression in the `Sketcher/src/Reader.cpp` file to define a function named `printFileNotFoundError`. The lambda expression returns a string, which is a copy of a string from the user function stack and is locally initialized in the Capture Clause itself. Unlike the previous assignment, the `mutable` keyword is not necessary in this case.

## Updated Function Definition

1. **Function File:**
    - File: `Sketcher/src/Reader.cpp`
    - Function Definition: `void Reader::getTriangles(std::vector<Triangle> &triangles)`

2. **Lambda Expression:**
    - Define a lambda expression named `printFileNotFoundError` with a capture clause as`[msg="Error! File Not Found!"]`.
    - The lambda expression is now initialized with a copy of the string from the user function stack.
    - The use of the `mutable` keyword is not necessary in this scenario, as the value of the string is changed from `std::string msg = "File error"` to `msg = "Error! File Not Found!"` in the Capture Clause itself.
    - It's important to note that it's just a copy, so the original user stack variable string hasn't yet been changed.
    - If the `mutable` keyword were not used, the variable would be passed as const, preventing changes inside the Lambda Expression.
    - This can be analogous to Initialization Lists in functions.
    - The lambda expression returns a string indicating a file not found error.

2. **Code Snippet:**
```
auto printFileNotFoundError = [msg = "Error! File Not Found"]() mutable
{
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
