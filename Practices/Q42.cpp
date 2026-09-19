// Check if array is sorted.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements for array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int isSorted = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i+1] < arr[i]){
            isSorted = 0;
            break;
        }
    }
    if(isSorted==1){
        cout << "Sorted" << "\n";
    }
    else{
        cout << "Not Sorted" << "\n";
    }

    return 0;
}