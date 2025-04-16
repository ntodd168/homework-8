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
    MatrixOp();

   private:
    void printMatrix();
};

#endif MATRIXOP_H