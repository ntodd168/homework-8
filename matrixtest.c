// Nicholas Todd
// HW# 8 C vs C++
// CMSC 313
// Kidd, section 5
// test code for the C implementation

#include <stdio.h>
#include "matrixopC.h"

int main() {
    // Define matrices A, B, C
    double A[4] = {6, 4, 8, 3}; // 2x2
    double B[6] = {1, 2, 3, 4, 5, 6}; // 2x3
    double C[6] = {2, 4, 6, 1, 3, 5}; // 2x3

    // Intermediate matrices
    double B3[6];         // 3 * B
    double Ct[6];         // C transposed (3x2)
    double mult[4];       // (3B * Ct) result (2x2)
    double D[4];          // Final result (2x2)

    // Perform operations
    scalarMultiply(B, 3, B3, 2, 3);
    transpose(C, Ct, 2, 3);
    multiplyMatrix(B3, 2, 3, Ct, 2, mult);
    addMatrix(A, mult, D, 2, 2);

    // Print matrices
    printf("Matrix A:\n");
    printMatrix(A, 2, 2);
    printf("\nMatrix B:\n");
    printMatrix(B, 2, 3);
    printf("\nMatrix C:\n");
    printMatrix(C, 2, 3);
    printf("\nMatrix D [result of D = A + (B * 3) * C.transpose()]:\n");
    printMatrix(D, 2, 2);

    return 0;
}