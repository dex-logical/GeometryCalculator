#pragma once
#include "Shape.h"
#include <stdexcept>

class Rectangle : public Shape {
    double height, width;
public:
    Rectangle(double h, double w) : height(h), width(w) {
        if (h <= 0 || w <= 0) {
            throw std::invalid_argument("All sides must be positive!");
        }
    }
    double area() const override { return height * width; }
    double perimeter() const override { return 2 * (height + width); }
};
