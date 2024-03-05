#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << calc.add(5, 7) << endl;       // Output: 12 (int version of add is called)
    cout << calc.add(3.5f, 4.2f) << endl; // Output: 7.7 (float version of add is called)
    return 0;
}
