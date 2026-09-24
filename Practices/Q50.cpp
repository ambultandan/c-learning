// Bubble sort.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of array.";
    for(int i=0; i<n; i++){
        cin >> arr[i];   
    }

    for(int i=0; i<n-1; i++){
        //bool isSwapped = false;
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                //swap(arr, j, j+1);
                //isSwapped = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        //if(!isSwapped) break;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}