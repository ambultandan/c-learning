// Make a function to check if a number is strong or not.

#include <iostream>
using namespace std;

//function declaration and defination.
void isStrong(int n){
    int fact, sum=0, copy, digit=0;
    copy = n;

    for(; n!=0; n=n/10){
        digit = n%10;
        fact = 1;
        for(int i=1; i<=digit; i++){
            fact = fact*i;
        }
        sum = sum + fact;
    }
    if(sum==copy){
        cout << "Strong Number." << "\n";
    }
    else{
        cout << "Not a Strong Number." << "\n";
    }
}

int main() {
    isStrong(524);
    return 0;
}