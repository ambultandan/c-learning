// Take radius as input and print their sum.

#include <iostream>
using namespace std;

int main() {
    float radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14 * radius * radius;
    cout << "Area of the circle = " << area << "\n";
    
    return 0;
}