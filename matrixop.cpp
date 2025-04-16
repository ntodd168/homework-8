// Nicholas Todd
// HW# 8 C vs C++
// CMSC 313
// Kidd, section 5
// implementation file for matrix operations class

#include <matrixop.h>

#include <iostream>
#include <string>

template <size_t r, size_t inner, size_t c>
MatrixOp<r, c> operator*(const MatrixOp<r, inner>& A, const MatrixOp<inner, c>& B);

// constructor for the class, creates a zero matrix of <rows,cols>
template <size_t rows, size_t cols>
MatrixOp<rows, cols>::MatrixOp() {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            data[i][j] = 0;
        }
    }
}

template <size_t rows, size_t cols>
MatrixOp<rows, cols> MatrixOp<rows, cols>::operator+(const MatrixOp<rows, cols>& other) const {
    MatrixOp<rows, cols> result;
    for (size_t i = 0; i < rows; ++i)
        for (size_t j = 0; j < cols; ++j)
            result.data[i][j] = data[i][j] + other.data[i][j];
    return result;
}

template <size_t rows, size_t cols>
MatrixOp<rows, cols> MatrixOp<rows, cols>::operator-(const MatrixOp<rows, cols>& other) const {
    MatrixOp<rows, cols> result;
    for (size_t i = 0; i < rows; ++i)
        for (size_t j = 0; j < cols; ++j)
            result.data[i][j] = data[i][j] - other.data[i][j];
    return result;
}

/*overloaded multiplication operator. templated to allow for any dimensions to be passed.
rows: the rows of matrix A
inner: the shared dimension
cols: the columns of matrix B
-the returned matrix will be rows x cols dimension
-if inner is not the same value, the function will return a zero matrix
*/
template <size_t rows, size_t inner, size_t cols>
MatrixOp<rows, cols> operator*(const MatrixOp<rows, inner>& A, const MatrixOp<inner, cols>& B) {
    MatrixOp<rows, cols> result;

    if (checkValid(A<rows, inner>, B<inner, cols>)) {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = 0;
                for (size_t k = 0; k < inner; ++k) {
                    result.data[i][j] += A.data[i][k] * B.data[k][j];
                }
            }
        }
    }

    return result;
}

// function to check if the operation on two matrices is actually valid. uses templated array size values to allow anything to pass. Operation o is one of the enum vals
template <size_t rows1, size_t cols1, size_t rows2, size_t cols2>
bool checkValid(const MatrixOp<rows1, cols1>& mat1, const MatrixOp<rows2, cols2>& mat2, Operation o) {
    switch (o) {
        case add:
            // return false if the dimensions are not equal
            return rows1 == rows2 && cols1 == cols2;
            break;
        case subtract:
            // return false if the dimensions are not equal
            return rows1 == rows2 && cols1 == cols2;
            break;
        case multiply:
            // return false if columns of mat1 do not equal rows of mat2
            return cols1 == rows2;
            break;
        default:
            return false;
    }
}

// prints the result of the matrix operation
template <size_t rows, size_t cols>
void MatrixOp<rows, cols>::printMatrix() const {
    std::cout << "[ ";
    for (size_t i = 0; i < rows; ++i) {
        std::cout << "\n";
        for (size_t j = 0; j < cols; ++j) {
            std::cout << data[i][j] << " ";
        }
    }
    std::cout << "\n]";
}