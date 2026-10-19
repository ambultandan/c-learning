// Remove all spaces from a sentence.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    string result;
    for(int i=0; i<str.size(); i++){
        if(str[i]!=' '){
            result += str[i];
        }
    }
    cout << "Without spaces = " << result << endl;
    return 0;
}