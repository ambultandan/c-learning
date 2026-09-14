// Take a number as input and count the total number of digits in it.

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