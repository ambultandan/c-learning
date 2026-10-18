// 2000.(leetcode) Reverse prefix of word.(pure logic)

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string word;
    cout << "Enter a string: ";
    getline(cin, word);

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    //Find the character manually.
    int i=0;

    while(word[i] != ch && word[i] != '\0'){
        i++;
    }

    //Reverse the  part using two pointers.
    int start=0;
    int end=i;

    while(start<end){
        char temp = word[start];
        word[start]=word[end];
        word[end]=temp;

        start++;
        end--;
    }

    //print the result.
    cout << word << endl;
    
    return 0;
}