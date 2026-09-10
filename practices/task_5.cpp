// Take a character as input and print its ASCII value.

#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    int asciValue = character; // Implicit conversion to int to get ASCII value
    cout << "ASCII value of '" << character << "' is: " << asciValue << endl;
    return 0;
}