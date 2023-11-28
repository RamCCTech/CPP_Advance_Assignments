# Assignment12: Using Virtual Function

## Overview

The recent modification in the code involves the introduction of a virtual function in the `OpenFile` class, which is then overridden in the `Writer` and `Reader` classes. This abstraction allows for a unified interface for file handling operations, providing flexibility for future extensions.

## Updates Made

1. **Added a virtual function, `openFile()`, to the OpenFile class.**
2. **Implemented the virtual function in both the `Writer` and `Reader` classes to suit their specific file handling needs.**

## Usage
1. **Instantiate an object of either the `Writer` or `Reader` class.**
2. **Utilize the common interface provided by the `openFile()` method, abstracted in the base class `OpenFile`.**
3. **This abstraction allows the program to handle file operations in a unified manner, ensuring a consistent interface across different file-related tasks.**
