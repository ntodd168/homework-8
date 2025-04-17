AUTHORING:<br>
Nicholas Todd<br>
HW# 8 C vs C++<br>
CMSC 313<br>
Kidd, section 5

PURPOSE OF SOFTWARE:<br>
These files contain c++ and C libraries that allow for matrix operations to be performed.

======================================================<br>
c++ implementation:

FILES:
- matrixop.h - header file
- matrixop.cpp - cpp implementation
- matrixtest.cpp - test code (contains the required matrices with the operations)

BUILD INSTRUCTIONS for g++:
1. Contain the above files in the same directory
2. Enter the following terminal commands:<br>
g++ -Wall -g matrixtest.cpp -o matrixtest.exe<br>
./matrixtest.exe

TESTING METHODOLOGY:<br>
matrixtest.cpp file used to test the library

NOTES:
- Functions are templated to allow for any size matrices to be constructed
- Invalid matrix operations result in a return of a zero matrix

======================================================<br>
C implementation:

FILES:
- matrixopC.h - header file
- matrixopC.c - cpp implementation
- matrixtest.c - test code (contains the required matrices with the operations)

BUILD INSTRUCTIONS for gcc:
1. Contain the above files in the same directory
2. Enter the following terminal commands:<br>
gcc -std=c99 -O0 -o matrixtest matrixtest.c matrixopC.c<br>
./matrixtest<br>

TESTING METHODOLOGY:<br>
matrixtest.c file used to test the library

NOTES:
- The C implementation has no templates
- The matrix sizes must be defined explicitly
- There is no validation checking of invalid matrix operations, the user must know if the operations they are performing are valid or not.
