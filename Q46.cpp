// Left rotate an array by k elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Left rotate array by how many elements?\n";
    cin >> k;
    for(int i=0; i<k; i++){
        //store.
        int temp = arr[0];
        //shift.
        for(int j=1; j<n; j++){
            arr[j-1]=arr[j];
        }
        // first element to last.
        arr[n-1] = temp;
    }

    //print array.
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}