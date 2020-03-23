#include "shape.h"
#include <string>

Shape::Shape(std::string name, double area) {
    this->name = name;
    this->area = area;
}

std::string Shape::getName() const {
    return this->name;
}

double Shape::getArea() const {
    return this->area;
}

void Shape::setName(std::string newName) {
    this->name = newName;
}

void Shape::setArea(double newArea) {
    this->area = newArea;
}

