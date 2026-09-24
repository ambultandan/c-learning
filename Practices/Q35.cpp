// Make a function which takes a number as input and print all of its factors.

#include <iostream>
using namespace std;

// Function Declaration and Defination.
int factor(int n){
    cout << "Factors :- " << "\n";
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main() {
    factor(10);
    return 0;
}