// Take a number n as input and find its multip,e from 1 to n.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << n << " * " << i << " = " << n*i << "\n";
    }
    return 0;
}