// Nicholas Todd
// HW# 8 C vs C++
// CMSC 313
// Kidd, section 5
// test code for the C++ implementation

#include "matrixop.h"

int main() {
    // create the matrices A, B, and C and fill with data
    MatrixOp<2, 2> A;
    A.data[0][0] = 6;
    A.data[0][1] = 4;
    A.data[1][0] = 8;
    A.data[1][1] = 3;

    MatrixOp<2, 3> B;
    B.data[0][0] = 1;
    B.data[0][1] = 2;
    B.data[0][2] = 3;
    B.data[1][0] = 4;
    B.data[1][1] = 5;
    B.data[1][2] = 6;

    MatrixOp<2, 3> C;
    C.data[0][0] = 2;
    C.data[0][1] = 4;
    C.data[0][2] = 6;
    C.data[1][0] = 1;
    C.data[1][1] = 3;
    C.data[1][2] = 5;

    // instantiate matrix D and perform the operations
    MatrixOp<2, 2> D;
    D = A + (B * 3) * C.transpose();

    // display the matrices
    cout << "Matrix A:\n";
    A.printMatrix();
    cout << endl;

    cout << "Matrix B:\n";
    B.printMatrix();
    cout << endl;

    cout << "Matrix C:\n";
    C.printMatrix();
    cout << endl;

    cout << "Matrix D [result of D = A + (B * 3) * C.transpose()]:\n";
    D.printMatrix();
}