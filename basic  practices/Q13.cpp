// Take a number N as input and print "Hello World" N times.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=1;i<=n;i++){
        cout << "Hello World!" << "\n";
    }
    return 0;
}