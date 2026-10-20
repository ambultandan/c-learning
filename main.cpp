#include <iostream>
#include <cstring>
using namespace std;

class Form{
    public://access modifier ||
        string name;//data members || properties || attributes.
        int *age;
    
    Form(string name, int age){
        cout << "Constructor Called!!" << endl;
        this->name = name;
        this->age = new int(age);
    }

    ~Form(){
        cout << "Destructor called!!" << endl;
    }

    // //copy constructor
    // Form(Form &obj){
    //     this->name = obj.name;
    //     this->age = new int(*obj.age);
    // }

    void display(){
        cout << "{Name : " << name << ", Age : " << *age << "}" << endl;
    }
};

int main() {
    Form obj1("Golu", 21);//static
    obj1.display();

    Form *obj2 = new Form("Polu", 21);//dynamic
    obj2->display();

    return 0;
}

