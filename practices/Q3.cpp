// Take two numbers from the user and swap their values.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;
    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Swapping the values
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping, first number = " << num1 << ", second number = " << num2 << "\n";

    return 0;
}