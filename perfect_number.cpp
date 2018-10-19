#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
bool perfect_number(int);
int main(){
    
    for (int number=2; number<=1000; number++){
        if  (perfect_number(number))
            cout << number << " is perfect" << endl;
    }
    
    return 0;
}
bool perfect_number(int num){
    int temp=1; 
    for (int i=2; i<=num/2; i++){
        if (num % i == 0)
            temp += i;
    }        
    if (temp == num)
        return true;
    else 
        return false;
   
}