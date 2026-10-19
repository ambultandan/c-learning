// Swap two Numbers using Pointers.

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int b;
    cout << "Enter 2nd number: ";
    cin >> b;

    int *p = &a;
    int *q = &b;


    int temp = *p;
    *p = *q;
    *q = temp;

    cout << a << "\n" << b << endl;
    return 0;
}