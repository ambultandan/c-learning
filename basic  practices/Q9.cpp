// Take units as inout. Calculate the electricity bill based on the number of units consumed.

#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    double bill;
    if(units <= 100){
        bill = units * 0.5;
    }
    else if(units <= 200){
        bill = 100 * 0.5 + (units - 100) * 0.75;
    }
    else if (units <= 300){
        bill = 100 * 0.5 + 100 * 0.75 + (units - 200) * 1.20;
    }
    else{
        bill = 100 * 0.5 + 100 * 0.75 + 100 * 1.20 + (units - 300) * 1.50;
    }
    cout << "The electricity bill is: $" << bill << endl;
    return 0;
}