#include <cstdlib>
#include <iostream>

double approximatePi() {
    int m = 0, n = 1000000;
    for (int i=1; i<=n; i++) {
        double x = static_cast<double>(rand()) / RAND_MAX;
        double y = static_cast<double>(rand()) / RAND_MAX;
        if (x*x + y*y < 1)
            m++;
    }
    return static_cast<double>(4)*m/n;
}

//int main() {
//    std::cout << approximatePi();
//    return 0;
//}