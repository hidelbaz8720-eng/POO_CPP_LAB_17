
#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {

    // =================================
    // TEST 1 : Matrices 2x2 d'entiers
    // =================================

    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0, 0) = 1;
    A.at(0, 1) = 2;
    A.at(1, 0) = 3;
    A.at(1, 1) = 4;

    B.at(0, 0) = 5;
    B.at(0, 1) = 6;
    B.at(1, 0) = 7;
    B.at(1, 1) = 8;

    cout << "===== MATRICES ENTIERES =====" << endl;

    cout << "Matrice A :" << endl << A;
    cout << "Matrice B :" << endl << B;

    Matrix<int, 2, 2> C = A + B;

    cout << "Addition A + B :" << endl << C;

    Matrix<int, 2, 2> D = A * B;

    cout << "Multiplication A * B :" << endl << D;


    // =================================
    // TEST 2 : Matrices 3x3 de doubles
    // =================================

    Matrix<double, 3, 3> X;
    Matrix<double, 3, 3> Y;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            X.at(i, j) = i + j + 1;
            Y.at(i, j) = 2.0;
        }
    }

    cout << "\n===== MATRICES REELLES =====" << endl;

    cout << "Matrice X :" << endl << X;
    cout << "Matrice Y :" << endl << Y;

    Matrix<double, 3, 3> Z = X + Y;

    cout << "Addition X + Y :" << endl << Z;

    Matrix<double, 3, 3> W = X * Y;

    cout << "Multiplication X * Y :" << endl << W;

    return 0;
}
