// Take two number as input and print their sum.

#include <iostream>
using namespace std;

int main() {
    float num1, num2 ,sum;
    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;
    cout << "Sum of two numbers = " << sum << "\n";
    return 0;
}