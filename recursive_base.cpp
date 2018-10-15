#include <iostream>
#include <math.h>
using namespace std;
int base (int,int);
int main(){
    int number;
    int exponent;
    cout << "number:";  
    cin >> number;
    cout << "exponent:";
    cin >> exponent;

    cout << base (number,exponent);
    
    return 0;
}
int base (int t, int u){
    if (u == 1)
        return t;
    else 
    return t * base (t,(u-1));
}