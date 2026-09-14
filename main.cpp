#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n =5;

    //outer loop - number of rows
    for(int i=1; i<=n; i++){
        for(int j=1; j<2*n; j++){
            if((i==j) || (i+j == 2*n)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}