#pragma once
#include <string>
#include <iostream>

class Shape {
private:
    std::string name;
    double area;

public:
    Shape(std::string name, double area);
    std::string getName() const;
    double getArea() const;
    void setName(std::string name);
    void setArea(double area);
};

