// Take a and b as input and print a raise to the power b.

#include <iostream>
using namespace std;

int main() {
    int a, b, power=1;
    cout << "Enter the base number:";
    cin >> a;

    cout << "Enter its power:";
    cin >> b;

    for(int i=1; i<=b; i++){
        power=a*a;
    }
    cout << a << " raise to the power " << b << " = " << power << "\n";

    return 0;
}