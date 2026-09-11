// Take a number as input and calculate its factorial.

#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout << "Factorial = " << fact << "\n";
    return 0;
}