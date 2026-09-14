// Take a number N as input and print numbers from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << i << "\n";
    }
    return 0;
}