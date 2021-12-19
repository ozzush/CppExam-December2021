//#include <cmath>
#include <iostream>

int main() {
    double x = 1.2;
    x += 2.3;
    std::cout << x << "\n";

    std::cout.precision(20);
    std::cout << 0.1 + 0.2 << "\n";
    std::cout << 0.3 << "\n";
    std::cout << (0.1 + 0.2 == 0.3) << "\n";
    std::cout << (0.1 + 0.2 - 0.3) << "\n";
}