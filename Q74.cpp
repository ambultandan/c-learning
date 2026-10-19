// Reverse Array using Pointers.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int *ptr = arr;
    int s=0, e=sizeof(arr)/sizeof(arr[0])-1;

    while(s<e){
        int temp = *(ptr+s);
        *(ptr + s) = *(ptr + e);
        *(ptr + e) = temp;

        s++;
        e--;
    }

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << *(ptr+i) << " ";
    }

    cout << endl;

    return 0;
}