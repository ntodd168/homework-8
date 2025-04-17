// Nicholas Todd
// HW# 8 C vs C++
// CMSC 313
// Kidd, section 5
// C implementation of matrix operations

#include <stdio.h>
#include"matrixopC.h"

//explicitly defined rows and columns for the test matrices. I couldnt figure out how to use a template-type design here
#define ROWS_A 2
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 3
#define ROWS_C 2
#define COLS_C 3

/*prints a 2d array
data is the pointer to the array*/
void printMatrix(double* data, int rows, int cols) {
    printf("[ ");
    for (int i = 0; i < rows; ++i) {
        if (i != 0) printf("\n  ");
        for (int j = 0; j < cols; ++j) {
            printf("%.0f ", data[i * cols + j]);
        }
    }
    printf("]\n");
}

/*adds matrix a and b
****must be the same size*/
void addMatrix(double* a, double* b, double* result, int rows, int cols) {
    for (int i = 0; i < rows * cols; ++i) {
        result[i] = a[i] + b[i];
    }
}

/*subtracts matrix b from a
****must be the same size*/
void subtractMatrix(double* a, double* b, double* result, int rows, int cols) {
    for (int i = 0; i < rows * cols; ++i) {
        result[i] = a[i] - b[i];
    }
}

/*multiply matrix a by scalar*/
void scalarMultiply(double* a, double scalar, double* result, int rows, int cols) {
    for (int i = 0; i < rows * cols; ++i) {
        result[i] = a[i] * scalar;
    }
}

//transpose matrix a (reverses rows and columns)
void transpose(double* a, double* result, int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[j * rows + i] = a[i * cols + j];
}

/*multiplies matrix a and b
****they must have the same inner value*/
void multiplyMatrix(double* a, int a_rows, int a_cols, double* b, int b_cols, double* result) {
    for (int i = 0; i < a_rows; ++i) {
        for (int j = 0; j < b_cols; ++j) {
            result[i * b_cols + j] = 0;
            for (int k = 0; k < a_cols; ++k) {
                result[i * b_cols + j] += a[i * a_cols + k] * b[k * b_cols + j];
            }
        }
    }
}
