#ifndef MATRIXOPC_H
#define MATRIXOPC_H

// print
void printMatrix(double* data, int rows, int cols);

// add
void addMatrix(double* a, double* b, double* result, int rows, int cols);

// subtract
void subtractMatrix(double* a, double* b, double* result, int rows, int cols);

// scalar multiply
void scalarMultiply(double* a, double scalar, double* result, int rows, int cols);

// transpose
void transpose(double* a, double* result, int rows, int cols);

// multiply two matrices
void multiplyMatrix(double* a, int a_rows, int a_cols, double* b, int b_cols, double* result);

#endif // MATRIXOPC_H