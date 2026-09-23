// Take a number N as i nput and calculate the sum of its digit.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number:";
    cin >> n;
    while(n!=0){
        int LastDigit = n%10;
        sum += LastDigit;
        n = n/10;
    }
    cout << "Sum = " << sum << "\n ";
    return 0;
}