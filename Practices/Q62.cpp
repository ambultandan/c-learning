// Toggle each character.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i]-32;
        }
        else{
            str[i] = str[i]+32;
        }
    }
    cout << str << endl; 
    return 0;
}