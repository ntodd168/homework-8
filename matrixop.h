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

    // member functions
    MatrixOp<rows, cols> operator+(const MatrixOp<rows, cols>& other) const;  // overloaded addition operator
    MatrixOp<rows, cols> operator-(const MatrixOp<rows, cols>& other) const;  // overloaded subtraction operator
    MatrixOp<cols, rows> transpose() const;                                   // transpose on self

   private:
    void printMatrix() const;
};

#endif MATRIXOP_H