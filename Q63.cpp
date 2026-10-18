// 2000.(leetcode) reverse Prefix of Word.

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cout << "Enter a string: ";
    getline(cin, word);

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int index = word.find(ch);
    reverse(word.begin(), word.begin()+index+1);
    
    cout << word << endl;

    return 0;
}