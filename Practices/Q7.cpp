// Take a number as input and determine whether it is positive, negative or zero.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num > 0){
        cout << "The number is positive.\n";
    }
    else if(num < 0){
        cout << "The number is negative.\n";
    }
    else{
        cout << "The number is zero.\n";
    }
    return 0;
}