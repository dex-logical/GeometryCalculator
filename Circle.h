#pragma once
#include "Shape.h"
#include <stdexcept>

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {
        if (r <= 0) {
            throw std::invalid_argument("All sides must be positive!");
        }
    }
    double area() const override { return 3.14159 * radius * radius; }
    double perimeter() const override { return 2 * 3.14159 * radius; }
};
