#include <iostream>
#include <string>
#include <vector>
//#include <typeinfo>

namespace cats {
    std::string cat_name;
    void mycat() {
        std::cout << cat_name << '\n';
    }
}

int main() {
    double a = 432.475;
    int b = static_cast<int>(a); // == 432
    std::cout << b << '\n';

    cats::cat_name = "Snowball";
    cats::mycat();

    auto name = std::string("Helen");
//    std::cout << typeid(name).name() << '\n';
    std::cout << std::is_same_v<decltype(name), std::string> << '\n';

    std::vector<std::string> my_cats = {cats::cat_name, "Patches", "Bandit", "Princess"};
    for (auto cat_name : my_cats) {
        cat_name = "Bug"; // doesn't change my_cats
        std::cout << cat_name << ' ';
    }
    std::cout << '\n';

    for (const auto &cat_name : my_cats) {
//        cat_name = "Bug"; // won't work because it's a const reference
        std::cout << cat_name << ' ';
    }
    std::cout << '\n';

    for (auto &cat_name : my_cats) {
        cat_name = "Bug";
    }
    for (const auto &cat_name : my_cats) {
        std::cout << cat_name << ' ';
    }
}
