#pragma once
#include "Shape.h"
#include <stdexcept>

class Square : public Shape {
	double side;
public:
	Square(double s) : side(s) {
		if (s <= 0) {
			throw std::invalid_argument("All sides must be positive!");
		}
	}
	double area() const override { return side * side; }
	double perimeter() const override { return 4.0 * side; }
};
