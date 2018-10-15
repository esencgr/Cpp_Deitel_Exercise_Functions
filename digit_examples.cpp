#include <iostream>
#include <stdio.h>
#include <math.h>
int digit_calculate( int);
void digit_2 (int,int);
using namespace std;
int main(){
    int number,digit;

    cout << "enter a number =",
    cin >> number ;
    
    cout << "how many digit =";
    digit = digit_calculate (number);
    cout << digit << endl;
    
    digit_2(number,digit);
    
    return 0;
}
int digit_calculate ( int number){
    int temp;
    while (number >= 1){
        number = number / 10;
        temp++;
    }
    return temp;
}
void digit_2 (int number , int x){
    int temp=number,n;
    
    for (int i=1; i<=x; i++){
        n = pow(10, x-i);
        cout << "  " <<(temp/n);
        temp = number % n ;
    }
}

