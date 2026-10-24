#include <iostream>
using namespace std;

class Car{
    private:
        void engine(){
            cout << "engine starting..." << endl;
        }
    public:
        void start(){
            engine();
            cout << "starting..." << endl;
        }
    };
int main() {
    Car obj;
    obj.start();

    return 0;
}