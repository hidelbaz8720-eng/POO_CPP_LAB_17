
#include <iostream>
#include "Point3D.h"

using namespace std;

int main() {

    Point3D p1(1.5, 2.5, 3.5);
    Point3D p2(4.0, 5.0, 6.0);

    cout << "Point 1 :" << endl;
    cout << "X = " << p1.getX() << endl;
    cout << "Y = " << p1.getY() << endl;
    cout << "Z = " << p1.getZ() << endl;

    cout << "\nPoint 2 :" << endl;
    cout << "X = " << p2.getX() << endl;
    cout << "Y = " << p2.getY() << endl;
    cout << "Z = " << p2.getZ() << endl;

    return 0;
}
