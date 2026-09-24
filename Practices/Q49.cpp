// Binary Search.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements oof array:\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int ans=-1;
    int s=0, e=n-1;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==target){
            ans = mid;
            break;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    cout << ans << "\n";
    return 0;
}