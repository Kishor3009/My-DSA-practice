#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main() {
    Animal *animalPtr;
    Dog dog;
    animalPtr = &dog;
    animalPtr->sound(); // Output: Dog barks
    return 0;
}
