// Guess the number between 1-10 game.

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int guess = 0;
    srand(time(0));
    int random = rand()%10+1;

    do{
        cout << "Guess the number between 1-10: ";
        cin >> guess;
        if(guess > random){
            cout << "Too high\n";
        }
        else if(guess<random){
            cout << "Too low\n";
        }
        else{
            cout << "Congratulations, your guess is correct!!\n";
        }
    }
    while(guess != random);
    return 0;
}