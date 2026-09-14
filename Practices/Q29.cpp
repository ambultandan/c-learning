// Take a number as input and determine whether it is an Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int c=0; 
    int copy = n, sum = 0;

    while (n>0){
        c++;
        n /= 10;
    }
    n = copy;

    while(n>0){
        int lastdigit = n%10;
        sum = sum + pow(lastdigit, c);
        n /= 10;
    }
    n = copy;

    cout << ((sum==n) ? "Armstrong Number\n" : "Not an armstrong number\n");
    return 0;
}