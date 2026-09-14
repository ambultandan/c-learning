// Take a nuber N as input and print its reverse.

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout << "Enter the number: ";
    cin >> n;
    
    while(n!=0){
        int LastDigit = n%10;
        rev = rev*10 + LastDigit;
        n = n/10;
    }
    cout << "Reverse = " << rev << "\n";
    return 0;
}