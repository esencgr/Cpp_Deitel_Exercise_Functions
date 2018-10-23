#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void guess_game(void);
bool control(int,int);
void display (int);

int main(){
    srand(time(NULL));
    guess_game();
}

void guess_game(void){
    int real,guess, total=1;
    char response;
    
    do {
       real = 1 + rand() % 100;
       cout << " guess a number = ";
       cin >> guess ;
       while (!control (guess,real)){
           total++;
           cin >> guess;
       } 
       cout << "Excellent! You guessed the number!\n";
       display (total);
       cout << "Would you like to play again?\nPlease type (y/n)? ";
       cin >> response ;
       cout << endl;
    
    }while (response == 'y');
}

bool control (int g, int r){
    if (g == r)
        return true;
    if (g < r)   
        cout << " Too low. try again.. "<< endl;
    else 
        cout << " Too high. try again.. "<< endl;
        return false;
}

void display (int t){
    if (t < 10 )
        cout << "Either you know the secret or you got lucky!\n";
    else if (t == 10)
        cout << "You know the secret! \n";
    else
        cout << "You should be able to do better!\n\n";
}   