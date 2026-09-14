// Take two numbers as input and print the larger number.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if(num1>num2){
        cout << "The larger number is: " << num1 << "\n";
    }
    else{
        cout << "The larger number is: " << num2 << "\n";
    }
    return 0;
}