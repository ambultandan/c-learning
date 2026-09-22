// Left rotate by one element.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of array.";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //Store.
    int temp = arr[0];
    //shift.
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    //last ele - first.
    arr[n-1]=temp;

    //print array.
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}