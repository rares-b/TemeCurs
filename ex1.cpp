#include <iostream>
#include <vector>


template <typename T>
T getSum1(std::vector <T> arr, int start, int end, T AW) {
    T sum = 0;
    for (auto i = arr.begin() + start; i!=arr.begin() + end; ++i)
        sum += *i;

    return sum + AW;
}

template <typename type>
type getSum2(std::vector <type> arr, int start, int end, type AW = type()) {
    type sum = 0;
    for (auto i=arr.begin() + start; i!=arr.begin() + end; ++i)
        sum += *i;

    return sum + AW;
}

int main() {
    std::vector <int> v = { 1, 2, 3, 4, 5, 6, 7 };

    std::cout << "The sum of element from position 1 to 6 and AW is: " << getSum1(v, 1, 6, 10);
    std::cout << std::endl << std::endl;
    std::cout << "AW is 0 because the default constructor of the template was used to initialize it.\n The sum of element from position 1 to 6 and AW is: " << getSum2(v, 1, 6);
    std::cout << std::endl << std::endl;
}

