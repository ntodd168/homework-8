// Nicholas Todd
// HW# 8 C vs C++
// CMSC 313
// Kidd, section 5
// implementation file for matrix operations class

#include <matrixop.h>

#include <iostream>
#include <string>

template <size_t rows1, size_t cols1, size_t rows2, size_t cols2>
MatrixOp<rows1, cols1> multiplyMatrices(const MatrixOp<rows1, cols1>& mat1,
                                        const MatrixOp<rows2, cols2>& mat2);

// constructor for the class, creates a zero matrix of <rows,cols>
template <size_t rows, size_t cols>
MatrixOp<rows, cols>::MatrixOp() {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            data[i][j] = 0;
        }
    }
}

// add matrix function, parameter sizes templated to allow for any size matrices
template <size_t r1, size_t c1, size_t r2, size_t c2>
double MatrixOp<r1, c1, r2, c2>::addMatrices(double mat1[r1][c1], double mat2[r2][c2]) {}

// subtract matrix function, parameter sizes templated to allow for any size matrices
template <size_t r1, size_t c1, size_t r2, size_t c2>
double MatrixOp<r1, c1, r2, c2>::subtractMatrices(double mat1[r1][c1], double mat2[r2][c2]) {}

// multiply matrix function, parameter sizes templated to allow for any size matrices
template <size_t rows1, size_t cols1, size_t rows2, size_t cols2>
MatrixOp<rows1, cols2> multiplyMatrices(const MatrixOp<rows1, cols1>& mat1, const MatrixOp<rows2, cols2>& mat2) {
    MatrixOp<rows1, cols2> result;
    if (checkValid(mat1, mat2, multiply)) {
        // loop through the rows
        for (size_t i = 0; i < rows1; ++i) {
            // thru the cols
            for (size_t j = 0; j < cols2; ++j) {
                result.data[i][j] = 0;
                // thru the shared dimension
                for (size_t k = 0; k < cols1; ++k) {
                    result.data[i][j] += mat1.data[i][k] * mat2.data[k][j];
                }
            }
        }
        return result;
    } else {
        // will return empty if not a valid matrix
        return result
    };
}

// function to check if the operation on two matrices is actually valid. uses templated array size values to allow anything to pass. Operation o is one of the enum vals
template <size_t r1, size_t c1, size_t r2, size_t c2>
bool MatrixOp<r1, c1, r2, c2>::checkValid(double mat1[r1][c1], double mat2[r2][c2], Operation o) {
    switch (o) {
        case add:
            // return false if the dimensions are not equal
            return r1 == r2 && c1 == c2;
            break;
        case subtract:
            // return false if the dimensions are not equal
            return r1 == r2 && c1 == c2;
            break;
        case multiply:
            // return false if columns of mat1 do not equal rows of mat2
            return c1 == r2;
            break;
        default:
            return false;
    }
}

// prints the result of the matrix operation
template <size_t r1, size_t c1, size_t r2, size_t c2>
void MatrixOp<r1, c1, r2, c2>::printResult(double mat1[r1][c1]) {}