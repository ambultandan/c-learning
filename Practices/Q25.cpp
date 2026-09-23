// Take a number as input and determine whether it is an Strong number or not.

#include <iostream>
using namespace std;

int main() {
    int n, fact, sum=0, copy, digit=1;
    cout << "Enter the number: ";
    cin >> n;
    
    copy = n;

    for(; n!=0; n=n/10){
        digit = n%10;
        fact = 1;
        for(int i=1; i<=digit; i++){
            fact = fact*i;
        }
        sum = sum + fact;
    }
    if(sum == copy){
        cout << "Strong Number.\n";
    }
    else{
        cout << "Not a Strong Number.\n";
    }
    return 0;
}
