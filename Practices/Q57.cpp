// Find the length of a character array without using strlen().

#include <iostream>
using namespace std;

int main() {
    char name[100];
    cout << "Enter the name: ";
    cin.getline(name, 100);

    int length = 0, i=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    cout << "Length of the string = " << length << endl;

    return 0;
}