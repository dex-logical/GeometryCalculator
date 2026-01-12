#pragma once
#include <cmath>
#include <stdexcept> // throw использует std::invalid_argument
#include "Shape.h"

class Triangle : public Shape {
    double side_a, side_b, side_c;
public:
    Triangle(double a, double b, double c) : side_a(a), side_b(b), side_c(c) {
        if (a <= 0 || b <= 0 || c <= 0) {
            throw std::invalid_argument("All sides must be positive!");
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw std::invalid_argument("Invalid triangle: violates triangle inequality");
        }
    }
    double area() const override {
        double p = perimeter() / 2.0;
        return std::sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));
    }
    double perimeter() const override { return side_a + side_b + side_c; }
};