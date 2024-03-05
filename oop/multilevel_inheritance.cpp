#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating...\n";
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking...\n";
    }
};

// Another derived class inheriting from Dog
class Puppy : public Dog {
public:
    void play() {
        cout << "Puppy is playing...\n";
    }
};

int main() {
    Puppy myPuppy;
    myPuppy.eat();  // Output: Animal is eating...
    myPuppy.bark(); // Output: Dog is barking...
    myPuppy.play(); // Output: Puppy is playing...
    return 0;
}
