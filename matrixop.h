// Nicholas Todd
// HW# 8 C vs C++
// CMSC 313
// Kidd, section 5
// header file for matrix operations class

#ifndef MATRIXOP_H
#define MATRIXOP_H
#include <cstddef>

using namespace std;

enum class Operation {
    add,
    subtract,
    multiply,
    divide
};

template <size_t rows, size_t cols>
class MatrixOp {
   public:
    MatrixOp() {}
    double addMatrices(double mat1[rows][cols], double mat2[rows][cols]);
    double subtractMatrices(double mat1[rows][cols], double mat2[rows][cols]);
    double divideMatrices(double mat1[rows][cols], double mat2[rows][cols]);
    double multiplyMatrices(double mat1[rows][cols], double mat2[rows][cols]);

   private:
    bool checkValid(double mat1[rows][cols], double mat2[rows][cols], Operation o);
    void printResult(double mat1[rows][cols]);
};

#endif MATRIXOP_H