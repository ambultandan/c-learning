// Take a salary as input and increase it by $5000 using assignment operators.


#include <iostream>
using namespace std;

int main() {
    float salary;

    cout << "Enter your salary: ";
    cin >> salary;

    salary += 5000; // Increasing salary by 5000
    cout << "Your new salary after increment is: " << salary << "\n";

    return 0;
}