// TAke a character array as input and print it.

#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout << "Enter the name: ";
    cin.getline(name, 20);

    cout << name << endl;
    return 0;
}