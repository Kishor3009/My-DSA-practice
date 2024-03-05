#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating...\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking...\n";
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Output: Animal is eating...
    myDog.bark(); // Output: Dog is barking...
    return 0;
}
