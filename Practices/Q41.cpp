// Count the total even and odd elements.

#include <iostream>
using namespace std;

int main() {
    int n, even_count=0, odd_count=0;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout << "Even elements count = " << even_count << "\n" << "Odd elements count = " << odd_count << "\n";

    return 0;
}