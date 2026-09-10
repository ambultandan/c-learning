// Take a number as input and determine whether it is even or odd.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "The number is even.\n";
    }
    else{
        cout << "The number is odd.\n";
    }
    return 0;
}