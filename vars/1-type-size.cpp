#include <iostream>
#include <vector>
#include <cstdint> // for int32_t and other types

int main() {
    int a = -214053;
    long b = 302418497;
    char c = 'r';
    int arr1[] = {}, arr2[] = {1, 2, 3, 4, 5};
    double d = 26435.231;
    std::vector<int> vec1, vec2(100);
    std::cout << "int: " << sizeof(int) << ' ' << sizeof a << '\n';
    std::cout << "long: " << sizeof(long) << ' ' << sizeof b << '\n';
    std::cout << "char: " << sizeof(char) << ' ' << sizeof c << '\n';
    std::cout << "arr: " << sizeof arr1 << ' ' << sizeof arr2 << '\n';
    std::cout << "double: " << sizeof(double) << ' ' << sizeof d << '\n';
    std::cout << "vector: " << sizeof vec1 << ' ' << sizeof vec2 << '\n';
}