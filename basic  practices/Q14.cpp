// Take a number N as input and print numbers from N to 1.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=n; i >=1; i--){
        cout << i << "\n";
    }
    return 0;
}