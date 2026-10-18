// Reverse a string.

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    // int s=0, e= str.size()-1;

    // while(s<e){
    //     swap(str[s++], str[e--]);
    // }

    reverse(str.begin(), str.end());
    cout << str << endl; 



    return 0;
}