#include <iostream>
#include <bitset> // Include the bitset library for binary conversion

using namespace std;

string toBinaryString(int num) {
    // Convert the number to binary using bitset
    return bitset<32>(num).to_string(); // Assuming 32-bit integer
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Convert the number to binary string
    string binaryString = toBinaryString(num);

    cout << "Binary representation: " << binaryString << endl;

    return 0;
}
