// Count subarray sum equals target.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int sum=0, c=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == target){
                c++;
            }
        }
    }
    return 0;
}