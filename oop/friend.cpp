#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box() : width(0) {}
    Box(double wid) : width(wid) {}

    // Declare a friend function
    friend void printWidth(Box box);
};

// Friend function definition
void printWidth(Box box) {
    // Because printWidth is a friend of Box, it can access
    // its private members directly
    cout << "Width of box : " << box.width << endl;
}

int main() {
    Box box(10);

    // Using the friend function to access the private data of Box
    printWidth(box);

    return 0;
}
