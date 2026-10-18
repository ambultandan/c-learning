// Minimum element of matrix:

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
        for(int j=0; j<cols; j++){
            cout << "Enter the elements of mat [" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
        cout << endl;
    }
    
    int min = mat[0][0];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if( min > mat[i][j]){
                min = mat[i][j];
            }
        }   
    }

    cout << "minimum element = " << min << endl;

    return 0;
}