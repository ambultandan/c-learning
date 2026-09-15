// Make a function to check if a number is prime number or not.

#include <iostream>
using namespace std;

void isPrime(){
    int n, count=0;
    cout << "Enter the number: ";
    cin >> n;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++; 
        }
    }
    cout << ((count == 2) ? "Prime Number." : "Not a Prime Number.") << "\n";
}
int main() {
    isPrime();
    return 0;
}