// Take a number N as and print all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    cout << "Even numbers from 1 to " << n << ":- " << "\n"; 

    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout << i << "\n";
        }
    }
    return 0;
}