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
    multiply
};

template <size_t rows, size_t cols>
class MatrixOp {
   public:
    double data[rows][cols];
    MatrixOp() {}
    double addMatrices(double mat1[r1][c1], double mat2[r2][c2]);
    double subtractMatrices(double mat1[r1][c1], double mat2[r2][c2]);
    double multiplyMatrices(const MatrixOp<rows1,cols1>& mat1,const MatrixOp<rows2,cols2>& mat2);

   private:
    bool checkValid(double mat1[r1][c1], double mat2[r2][c2], Operation o);
    void printResult(double mat1[r1][c1]);
};

#endif MATRIXOP_H