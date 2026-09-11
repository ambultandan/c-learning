// Take a number as input and determine whether it is prime or not.

#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cout << "Enter the number:";
    cin >> n;

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        }
    }
    cout << ((count == 2) ? "Prime Number.\n" : "Not a Prime Number.\n");

    return 0;
}