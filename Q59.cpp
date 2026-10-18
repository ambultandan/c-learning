// Check if a string is palindrome.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int i=0, j=str.size()-1;
    bool isPal = true;
    while(i < j){
        if(str[i] != str[j]){
            isPal = false;
            break;
        }
        i++;
        j--;
    }
    if(isPal == 1){
        cout << "Planidrome" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }
    
    return 0;
}