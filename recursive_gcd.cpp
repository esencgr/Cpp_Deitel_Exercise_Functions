#include <iostream>
#include <math.h>
using namespace std;
int gcd (int, int);
int main(){ 
    
    int num1, num2;
    cout << "enter two number:";
    cin >> num1 >> num2;
    cout << "number's gcd = ";
    cout << gcd (num1,num2);
    
    return 0;
}
int gcd (int x, int y){
    if (y==0)
        return x;
    else 
        return gcd (y,x % y);
}