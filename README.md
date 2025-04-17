AUTHORING:
Nicholas Todd
HW# 8 C vs C++
CMSC 313
Kidd, section 5

PURPOSE OF SOFTWARE:
These files contain c++ and C libraries that allow for matrix operations to be performed.

================================================================================
c++ implementation:

FILES:
matrixop.h - header file
matrixop.cpp - cpp implementation
matrixtest.cpp - test code (contains the required matrices with the operations)

BUILD INSTRUCTIONS for g++:
1. Contain the above files in the same directory
2. Enter the following terminal commands:
g++ -Wall -g matrixtest.cpp -o matrixtest.exe
./matrixtest.exe

TESTING METHODOLOGY:
matrixtest.cpp file used to test the library

NOTES:
- Functions are templated to allow for any size matrices to be constructed
- Invalid matrix operations result in a return of a zero matrix

================================================================================
C implementation:

FILES:
matrixopC.h - header file
matrixopC.c - cpp implementation
matrixtest.c - test code (contains the required matrices with the operations)

BUILD INSTRUCTIONS for g++:
1. Contain the above files in the same directory
2. Enter the following terminal commands:
gcc -o matrixtest matrixtest.c matrixopC.c
matrixtest

TESTING METHODOLOGY:
matrixtest.cpp file used to test the library

NOTES:
- The C implementation has no templates
- The matrix sizes must be defined explicitly
- There is no validation checking of invalid matrix operations, the user must know if the operations they are performing are valid or not.
