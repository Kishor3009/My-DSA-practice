#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating...\n";
    }
};

// Another base class
class Vehicle {
public:
    void drive() {
        cout << "Vehicle is driving...\n";
    }
};

// Derived class inheriting from both Animal and Vehicle
class DogCar : public Animal, public Vehicle {
public:
    void bark() {
        cout << "Dog is barking...\n";
    }
};

int main() {
    DogCar myDogCar;
    myDogCar.eat();   // Output: Animal is eating...
    myDogCar.drive(); // Output: Vehicle is driving...
    myDogCar.bark();  // Output: Dog is barking...
    return 0;
}
