#include <iostream>
#include <algorithm>
#include <vector>

template <typename type>
type getSum(std::vector <type> arr, int start, int end, type AW = type()) {
    type sum = 0;
    std::for_each(arr.begin() + start, arr.begin() + end, [&](type n) {
        sum += n;
    });

    return sum;
}

int main() {
    std::vector <int> vec = { 1, 2, 3, 4, 5, 6, 7 };
    int resSum = getSum <int>(vec, 1, 6);
    std::cout << "AW is 0 because the default constructor of the template was used to initialize it.\n The sum of element from position 1 to 6 and AW is: " << resSum;
}