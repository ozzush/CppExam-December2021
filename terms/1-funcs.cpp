#include <iostream>

void free_func() {
    std::cout << "Free function\n";
}

struct some_struct {
    static void member_func() {
        std::cout << "Member function\n";
    }
};

int main() {
    free_func();
//    member_func(); won't work
    some_struct::member_func();
}
