#include <iostream>
#include <string>

std::string global_var = "Global variable, static storage duration\n";

std::string &getStaticVar() {
    static std::string static_var = "Static member variable, static storage duration\n";
    return static_var;
}

int main() {
    std::cout << global_var << getStaticVar();
    std::string auto_storage1 = "Auto storage duration\n";
    if (true) {
        std::string auto_storage2 = "Local variable, auto storage duration\n";
        std::cout << auto_storage1 << auto_storage2;
    }
    std::cout << auto_storage1;
//    std::cout << auto_storage2; Local variable already dead
    std::string *dyno_storage = new std::string("Dynamic storage duration\n");
    std::cout << *dyno_storage;
    delete dyno_storage; // Have to delete afterwards
}
