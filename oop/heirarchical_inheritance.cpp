#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape...\n";
    }
};

// Derived class inheriting from Shape
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle...\n";
    }
};

// Another derived class inheriting from Shape
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing rectangle...\n";
    }
};

int main() {
    Circle myCircle;
    Rectangle myRectangle;
    
    myCircle.draw();    // Output: Drawing circle...
    myRectangle.draw(); // Output: Drawing rectangle...
    
    return 0;
}
