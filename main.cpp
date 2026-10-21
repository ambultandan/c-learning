#include <iostream>
#include <cstring>
using namespace std;

class Student {
        public:
            string name;
            int age;

            Student(string a, int n){
                name = a;
                age = n;
            }

            Student(const Student& other): name(other.name), age(other.age){
                cout << "Copy constructor called!" << endl;
            }
        };


int main() {
    Student s1("Golu", 19);
    Student s2 = s1;

    cout << s2.name << endl;
    cout << s2.age << endl;

    return 0;
}

