// Nicholas Todd
// HW# 8 C vs C++
// CMSC 313
// Kidd, section 5
// implementation file for matrix operations class

#include <matrixop.h>

#include <iostream>
#include <string>

//constructor for the class, nothing needed here
template <size_t rows, size_t cols>
MatrixOp<rows, cols>::MatrixOp() {}

//add matrix function, parameter sizes templated to allow for any size matrices
template <size_t rows, size_t cols>
double MatrixOp<rows, cols>::addMatrices(double mat1[rows][cols], double mat2[rows][cols]) {}

//subtract matrix function, parameter sizes templated to allow for any size matrices
template <size_t rows, size_t cols>
double MatrixOp<rows, cols>::subtractMatrices(double mat1[rows][cols], double mat2[rows][cols]) {}

//divide matrix function, parameter sizes templated to allow for any size matrices
template <size_t rows, size_t cols>
double MatrixOp<rows, cols>::divideMatrices(double mat1[rows][cols], double mat2[rows][cols]) {}

//multiply matrix function, parameter sizes templated to allow for any size matrices
template <size_t rows, size_t cols>
double MatrixOp<rows, cols>::multiplyMatrices(double mat1[rows][cols], double mat2[rows][cols]) {}

//function to check if the operation on two matrices is actually valid. uses templated array size values to allow anything to pass. Operation o is one of the enum vals
template <size_t rows, size_t cols>
bool MatrixOp<rows, cols>::checkValid(double mat1[rows][cols], double mat2[rows][cols], Operation o) {
}

//prints the result of the matrix operation
template <size_t rows, size_t cols>
void MatrixOp<rows, cols>::printResult(double mat1[rows][cols]) {}