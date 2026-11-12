
#include "Point3D.h"

// Constructeur
Point3D::Point3D(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// Accesseur getX
double Point3D::getX() const {
    return x;
}

// Accesseur getY
double Point3D::getY() const {
    return y;
}

// Accesseur getZ
double Point3D::getZ() const {
    return z;
}
