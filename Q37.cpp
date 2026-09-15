// Make a function isStrong() which checks if a number is strong or not.

#include <iostream>
using namespace std;

//Function declaration and defination:
void  isStrong(n){
    int sum=0, copy, digit, fact;
    
    copy = n;

    for(; n!=0; n=n/10){
        digit = n%10;
        fact = 1;
        for(int i=1; i<=digit; i++){
            fact = fact*i;
        }
        sum = sum + fact;
    }
    cout << ((sum == copy) ? "Strong Number." : "Not a strong Number.") << "\n";
}
int main() {
    int n;
    cout << "Enter the number: ";
    isStrong(n);
    return 0;
}