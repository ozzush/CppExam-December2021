#include <iostream>
#include <vector>

int &foo() {
    int x = 5;
    return x; // Dangling reference, x deleted right after foo() ends
}

int main() {
    /// foo refers to a deleted object
//    std::cout << foo();

    /// vector is moved to a different location after resizing so all pointers are invalidated
    std::vector<int> vec{1};
    int *first_elm = &vec[0];
    vec.resize(10);
    std::cout << vec[0] << ' ' << *first_elm;

    /// nullptr points nowhere (obviously)
//    int* null = nullptr;
//    std::cout << *null;
}
