// Count subarray sum equals target.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of array: \n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int sum=0, c=0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == target){
                c++;
            }
        }
    }
    cout << "Subarrays = " << c << "\n";
    return 0;
}