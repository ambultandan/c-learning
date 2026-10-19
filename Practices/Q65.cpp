// Count uppercase and lowercase characters.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int ucount=0;
    int lcount=0;

    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            ucount++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            lcount++;
        }
    }
    cout << "Uppercase = " << ucount << " and Lowercase = " << lcount << endl;


    return 0;
}