// Q1. Take three numbers as input and print their average.

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, avg;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    avg = (num1 + num2 + num3)/3.0;
    cout << "Average = " << avg << "\n";

    return 0;
} 
