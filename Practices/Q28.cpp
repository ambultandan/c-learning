// Take a number N as input and determine whether it is a palindrome or not.

#include <iostream>
using namespace std;

int main() {
    int n;
    int rev = 0;
    cout << "Enter the number: ";
    cin >> n;
    int copy = n;

    while(n!=0){
        int lastdigit = n%10;
        rev = rev*10 + lastdigit;
        n /= 10;
    }
    cout << ((rev == copy) ? "Plaindrome Number\n" : "Not a Palindrome Number\n");
    return 0;
}