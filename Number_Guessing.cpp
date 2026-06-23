#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    cout<<"Let's start the Number Guessing game\nNumber is from 1 to 100\n";
    while(1){
        cout<<"Enter your Guess: ";
        cin>>guess;
        if(num > guess) cout<<guess<<" is lower\n";
        else if(num < guess) cout<<guess<<" is higher\n";
        else {
            cout<<"Woowwwwwwww!!!!!!\nYou Guessed the Correct number\n";
            break;
        }
    }
    return 0;
}