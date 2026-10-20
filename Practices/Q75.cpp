// Take details of student using structure.

#include <iostream>
#include <cstring>
using namespace std;

struct Student{
    string name;
    int age;
};

int main() {
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore();

    Student arr[size];

    for(int i=0; i<size; i++){
        cout << "Enter name of " << (i+1) << " student: " << endl;
        getline(cin, arr[i].name);

        cout << "Enter age of " << (i+1) << " student: " << endl;
        cin >> arr[i].age;

        cin.ignore();
    }

    cout << "\n----------Students Details-----------\n";
    for(int i=0; i<size; i++){
        cout << "{Name: " << arr[i].name << ", Age : " << arr[i].age << "}" << endl;
    }
    return 0;
}
