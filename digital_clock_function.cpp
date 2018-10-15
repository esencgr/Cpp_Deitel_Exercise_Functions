#include <iomanip> 
#include <iostream> 
#include <stdlib.h> 
#include <unistd.h> 
using namespace std; 

int hours = 0; 
int minutes = 0; 
int seconds = 0; 
  
// function to display the timer 
void displayClock() 
{ 
    // system call to clear the screen 
    system("cls"); 
    cout << "\t"<< "TIMER\n"; 
    cout << "\t"<< hours << " : "; 
    cout << minutes << " : "; 
    cout << seconds  << endl; 
   
} 
void timer() { 
    while (true) { 
        // display the timer 
        displayClock(); 
        sleep(1); 
        seconds++; 
        if (seconds == 60) { 
            minutes++; 
            if (minutes == 60) { 
                hours++; 
                minutes = 0; 
            } 
            seconds = 0; 
        } 
    } 
} 
int main() 
{ 
    // start timer from 00:00:00 
    timer(); 
    return 0; 
} 