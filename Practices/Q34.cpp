// Rectangle Pattern.

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;

    int column;
    cout << "Enter the column: ";
    cin >> column;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=column; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}