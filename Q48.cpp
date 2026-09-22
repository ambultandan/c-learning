// Linear Search.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << " elements of array.";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int ans=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
    
    return 0;
}