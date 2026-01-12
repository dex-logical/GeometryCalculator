#pragma once
#include "Shape.h"

class Rectangle : public Shape {
    double height, width;
public:
    Rectangle(double h, double w) : height(h), width(w) {}
    double area() const override { return height * width; }
    double perimeter() const override { return 2 * (height + width); }
};
