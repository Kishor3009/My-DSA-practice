#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "Class A\n";
    }
};

// Another base class
class B {
public:
    void displayB() {
        cout << "Class B\n";
    }
};

// Derived class inheriting from both A and B
class C : public A, public B {
public:
    void displayC() {
        cout << "Class C\n";
    }
};

int main() {
    C obj;
    obj.displayA(); // Output: Class A
    obj.displayB(); // Output: Class B
    obj.displayC(); // Output: Class C
    return 0;
}
