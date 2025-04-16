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

    // overloaded addition operator
    MatrixOp<rows, cols> operator+(const MatrixOp<rows, cols>& other) const;
    // overloaded subtraction operator
    MatrixOp<rows, cols> operator-(const MatrixOp<rows, cols>& other) const;
    // transpose on self
    MatrixOp<cols, rows> transpose() const;
    // print self
    void printMatrix() const;

   private:
};

// multiplication
template <size_t rows, size_t inner, size_t cols>
MatrixOp<rows, cols> operator*(const MatrixOp<rows, inner>& A, const MatrixOp<inner, cols>& B);

// dimension validation
template <size_t rows1, size_t cols1, size_t rows2, size_t cols2>
bool checkValid(const MatrixOp<rows1, cols1>& mat1, const MatrixOp<rows2, cols2>& mat2, Operation o);

#include "matrixop.cpp"

#endif MATRIXOP_H