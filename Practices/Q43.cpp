// Reverse an array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements for array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Reversed:- " << "\n";
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}