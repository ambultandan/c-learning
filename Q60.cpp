// Replace character in a string.

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char oldch;
    cout << "Enter the character you want to replace: ";
    cin >> oldch;

    char newch;
    cout << "Enter the character you want to replace " << oldch << " with: ";
    cin >> newch;

    for(int i=0; i<str.size(); i++){
        if(str[i] == oldch){
            str[i] = newch;
        }
    }

    cout << str << endl;
    return 0;
}