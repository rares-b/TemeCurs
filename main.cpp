#include "shape.h"
#include <iostream>
#include <vector>
#include "functor.h"
#include <algorithm>


template <typename Funct>
void apply(std::vector <Shape*> v, Funct f) {
    std::for_each(v.begin(), v.end(), f);
}

int main() {
    Shape s1 = Shape("Circle", 10.0);
    Shape *ptrS1;
    ptrS1 = &s1;
    Shape s2 = Shape("Triangle", 20.0);
    Shape *ptrS2;
    ptrS2 = &s2;
    Shape s3 = Shape("Square", 6.0);
    Shape *ptrS3;
    ptrS3 = &s3;
    Shape s4 = Shape("Cube", 90.0);
    Shape *ptrS4;
    ptrS4 = &s4;
    Shape s5 = Shape("Parallelogram", 10.5);
    Shape *ptrS5;
    ptrS5 = &s5;

    std::vector <Shape*> v = { ptrS1, ptrS2, ptrS3, ptrS4, ptrS5 };

    // Multiplying functor
    apply(v, multiply_functor(5));
    std::cout << "Values multiplied by 5: \n";
    std::cout << s1.getArea() << std::endl;
    std::cout << s2.getArea() << std::endl;
    std::cout << s3.getArea() << std::endl;
    std::cout << s4.getArea() << std::endl;
    std::cout << s5.getArea() << std::endl;

    // Dividing functor
    apply(v, divide_functor(4));
    std::cout << "\n\nValues divided by 5: \n";
    std::cout << s1.getArea() << std::endl;
    std::cout << s2.getArea() << std::endl;
    std::cout << s3.getArea() << std::endl;
    std::cout << s4.getArea() << std::endl;
    std::cout << s5.getArea() << std::endl << std::endl;

    // print the string
    apply(v, convert_functor());

}