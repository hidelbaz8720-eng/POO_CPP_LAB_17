
#include <iostream>
#include "include\Point.h"
#include "include\Segment.h"
#include "include\Triangle.h"

using namespace std;

int main() {

    // Création des trois points
    Point A(0, 0);
    Point B(3, 0);
    Point C(0, 4);

    // Création des côtés
    Segment AB(A, B);
    Segment BC(B, C);
    Segment CA(C, A);

    // Création du triangle
    Triangle T(A, B, C);

    cout << "===== Bibliotheque Geo2D =====" << endl;

    cout << "Longueur AB : " << AB.longueur() << endl;
    cout << "Longueur BC : " << BC.longueur() << endl;
    cout << "Longueur CA : " << CA.longueur() << endl;

    cout << "Perimetre du triangle : "
         << T.perimetre() << endl;

    return 0;
}
