// Find maximum in Array.


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
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>=max){
            max = arr[i];
        }
    }
    cout << "Maximum = " << max << "\n";

    return 0;
}