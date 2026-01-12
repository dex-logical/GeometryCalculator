#include <iostream>
#include <vector>
#include <memory>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(5.0));
    shapes.push_back(std::make_unique<Rectangle>(3.0, 4.0));
    shapes.push_back(std::make_unique<Triangle>(3.0, 4.0, 5.0));

    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->area()
            << ", Perimeter: " << shape->perimeter() << "\n";
    }

    return 0;
}

