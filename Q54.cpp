// Maximum element in matrix.

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
            cout << "Enter the elements of mat [" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }
    int max=mat[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j]>max){
                max = mat[i][j];
            }
        }
        cout << endl;
    }
    cout << "Max element = " << max << endl;
    return 0;
}