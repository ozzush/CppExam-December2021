#include <iostream>
#include <cassert>

int main() {
    /// if
    bool expression = true;
    if (expression) { // converts expression to bool if possible
        std::cout << "expression is true\n";
    }
    else {
        std::cout << "expression is false\n";
    }

    /// for
    int count1 = 0, count2 = 0;
    for (int i = 1; i < 5; ++i) { count1 += i; }
    for (int i = 1; i++ < 5; ) { count2 += i; }
    std::cout << count1 << ' ' << count2 << '\n';

    /// while
    count1 = 0, count2 = 0;
    while (count1 < 5) {
        ++count1;
    }
    do {
        ++count2;
    } while (false);
    std::cout << count1 << ' ' << count2 << '\n';
}