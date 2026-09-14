// Take character as input and check whether it is a vowel or consonant(using switch).

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch(ch){
        case 'a':{
            cout << "Vowel\n";
            break;
        }
        case 'e':{
            cout << "Vowel\n";
            break;
        }
        case 'i':{
            cout << "Vowel\n";
            break;
        }
        case 'o':{
            cout << "Vowel\n";
            break;
        }
        case 'u':{
            cout << "Vowel\n";
            break;
        }
    default :{
        cout << "Consonant\n";
    }
    }
    return 0;
}