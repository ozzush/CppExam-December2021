#include <iostream>

int next_a(int &a) {
    a++;
    return a;
}

int main() {
    int a = 0;
    std::cout << a + next_a(a) << '\n';
    a = 0;
    std::cout << 10 * a + next_a(a);
}