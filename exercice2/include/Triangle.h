
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    Point A;
    Point B;
    Point C;

public:
    Triangle();
    Triangle(Point A, Point B, Point C);

    double perimetre() const;
};

#endif
