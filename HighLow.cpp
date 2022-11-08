#include <cstdio>
#include <iostream>
#include <time.h>
using namespace std;

int inp(string text){
    cout << text;
    int i = 0;
    cin >> i;
    cout << endl;
    return i;
}

int main(){
    srand(time(NULL));

    int number = rand() % 100 +1;
    int guess = 0;

    guess = inp("Guess a number between 1 and 100: ");

    while(true){
        if(guess > number){
            cout << "Too high!" << endl;
            guess = inp("Try again: ");
        }
        else if(guess < number){
            cout << "Too low!" << endl;
            guess = inp("Try again: ");
        }
        else {
            cout << "You guessed correctly!\n";
            break;
        }
    }
    return 0;
}


