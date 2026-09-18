// Take the size N and N array elements as input. Print the array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements for an array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "\nElements are: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}