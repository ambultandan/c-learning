// Reverse an array. (Two pointer algorithm method)

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
    int s=0, e=n-1;
    while(s<e){
        int temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}