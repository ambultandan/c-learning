// Take the purchase amount as input and apply the following discount and print final amount.

#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter the purchase amount: ";
    cin >> amount;

    if ((amount >= 0) && (amount <= 5000)){
        cout << "Final amount after discount: $" << amount << endl;
    }
    else if ((amount > 5000) && (amount <= 7000)){
        cout << "Final amount after discount: $" << amount - (amount * 0.05);
    }
    else if ((amount > 7000) && (amount <= 9000)){
        cout << "FInal amount after discount: $" << amount - (amount *0.10) << endl;
    }
    else if (amount > 9000){
        cout << "Final amount after discount: $" << amount - (amount * 0.20) << endl;
    }    
    return 0;
}