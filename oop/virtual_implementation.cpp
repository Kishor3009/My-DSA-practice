#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a shape.\n";
    }
};

// Derived class
class Circle : public Shape {
public:
    // Override the virtual function
    void draw() {
        cout << "Drawing a circle.\n";
    }
};

// Derived class
class Rectangle : public Shape {
public:
    // Override the virtual function
    void draw() {
        cout << "Drawing a rectangle.\n";
    }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    Rectangle rectangle;

    // Point to the Circle object and call draw()
    shapePtr = &circle;
    shapePtr->draw(); // Output: Drawing a circle.

    // Point to the Rectangle object and call draw()
    shapePtr = &rectangle;
    shapePtr->draw(); // Output: Drawing a rectangle.

    return 0;
}
