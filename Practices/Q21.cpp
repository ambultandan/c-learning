// Take a number as input and count the total number of digits in it.

#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    cout << "Enter the number:- ";
    cin >> n;

    for(; n != 0; n=n/10){
        count++;
    }
    cout << "Total Digits:" << count << "\n";
    return 0;
}