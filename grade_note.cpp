#include <iostream>
#include <math.h>
using namespace std;
int grade_note(int);    
int main(int argc, char **argv)
{
    int x,sum=0 ,count=0;
    do {
       cout << "enter note exit -1:";
       cin >> x;
       cout << grade_note(x) << endl;
       sum += x;
       count++;
    } while ( x != -1);
    cout << "sum of note = " << sum + 1 ;
    cout << "avarage = " << ((sum + 1) / (count - 1));
    
return 0;
}
int grade_note(int note){

    if (note >= 90 && note <=100)
        return 4;
    
    if (note >= 80 && note <=89)
        return 3; 
    
    if (note >= 70 && note <=79)
        return 2;
    
    if (note >= 60 && note <=69)
        return 1;

    if (note <= 60)
        return 0;   
}