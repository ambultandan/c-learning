// Sum of array elements using pointers.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;

    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i=0; i<size; i++){
        sum += *(ptr+i);
    }

    cout << "Sum = " << sum << endl;
    return 0;
}