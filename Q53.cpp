// Find the sum of Primary and secondary Diagonals.


#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of cols: ";
    cin >> cols;

    int mat[rows][cols];

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cout << "Enter the elements of mat [" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
        cout << endl;
    }

    

    return 0;
}