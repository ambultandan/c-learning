// Take day number as input and print corresponding day Name.

#include <iostream>

using namespace std;

int main() {
    int day;
    cout << "Enter a number between 1 to 7: ";
    cin >> day;

    switch(day){
        case 1:{
            cout << "Monday\n";
            break;
        }
        case 2:{
            cout << "Tuesday\n";
            break;
        }
        case 3:{
            cout << "Wednesdday\n";
            break;
        }
        case 4:{
            cout << "thursday\n";
            break;
        }
        case 5:{
            cout << "friday\n";
            break;
        }
        case 6:{
            cout << "saturday\n";
            break;
        }
        case 7:{
            cout << 'sunday\n';
            break;
        }
    }
    return 0;
}