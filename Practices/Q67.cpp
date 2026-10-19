// Find the first repeating character.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char first_repeat = '\0';

    for (int i = 0; i < str.size(); i++) {
        for (int j = i + 1; j < str.size(); j++) {
            if (str[i] == str[j]) {
                first_repeat = str[i];
                break;
            }
        }

        if (first_repeat != '\0') {
            break;
        }
    }

    if (first_repeat != '\0') {
        cout << "First repeated character = " << first_repeat << endl;
    } else {
        cout << "No repeating character found." << endl;
    }

    return 0;
}