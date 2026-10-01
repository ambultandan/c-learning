// Find the sum of Matrix.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of cols: ";
    cin >> cols;

    int mat[rows][cols];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "Enter element of mat[" << i << "][" << j << j << "] = ";
            cin >> mat[i][j];
        }
        cout << endl;
    }

    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum += mat[i][j];
        }
        cout << endl;
    }

    cout << "sum : " << sum << endl;
    return 0;
}