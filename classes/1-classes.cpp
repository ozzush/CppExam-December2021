#include <iostream>

struct SomeFriend; // Declaration

struct Base {
    Base() {}
    Base(int x_) : x(x_) {}

    int x = 10;
    virtual void info() const { // Const-qualifier, can't change *this
        std::cout << "x=" << x << "\n";
    }
    virtual ~Base() = default;
protected:
    static void secret() {
        std::cout << "It's a secret\n";
    }
private:
    static void very_dark_secret() {
        std::cout << "It's a very dark secret\n";
    }

    friend SomeFriend;
};

struct Derived : Base {
    Derived() {}
    Derived(int y_) : y(y_) {} // Base is initialised with default constructor
    Derived(int x_, int y_) : Base(x_), y(y_) {}

    int y = 20;
    void info() const override {
        Base::info();
        std::cout << "y=" << y << "\n";
    }
    void uncover_secret() {
        secret();
//        very_dark_secret(); // No access
    }
};

struct SomeFriend { // Definition
    void uncover_dark_secret() {
        Base::very_dark_secret();
    }
};


int main() {
    Base b;
    /* const */ Derived d;
    SomeFriend secret_buster;
    b.info();
    d.info();
    d.uncover_secret();
    secret_buster.uncover_dark_secret();
}