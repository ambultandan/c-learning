// Minimum element using pointers.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23};

    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;

    int min = *ptr;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(*(ptr+1)<min){
            min = *(ptr+1);
        }
    }

    cout << "Minimum = " << min << endl;

    return 0;
}