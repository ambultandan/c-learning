// Maximum Element using Pointers.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int *ptr = arr;
    int max = *ptr;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(*(ptr + i) > max){
            max = *(ptr+i);
        }
    }

    cout << "Maximum = " << max << endl;
    
    return 0;
}