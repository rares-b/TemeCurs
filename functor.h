#pragma once

#include "shape.h"
#include <iostream>
#include <string>

class multiply_functor {
private:
    double x;

public:
    multiply_functor(double n) : x(n) {}

    double operator () (Shape* shape) const {
        shape->setArea(shape->getArea() * x);
        return shape->getArea();
    }

};

class divide_functor {
private:
    double y;

public:
    divide_functor(double n) : y(n) {}

    double operator() (Shape* shape) const {
        shape->setArea(shape->getArea() / y);
        return shape->getArea();
    }
};

class convert_functor {
public:
    void operator() (Shape* shape) const {
        std::cout << shape->getName() << " " << shape->getArea() << "!\n";
    }
};