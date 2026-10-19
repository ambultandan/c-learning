// Count vowels and consonant.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int v=0, c=0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            v++;
        }
        else{
            c++;
        }
    }
    cout << "Vowels = " << v << " and Consonants = " << c << endl;

    return 0;
}