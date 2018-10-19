#include <iostream>
#include <math.h>
using namespace std;
/// gcd = en buyuk ortak bolen
int gcd_calculate  ( int num1 , int num2 ){
    int gcd = 1;
    for (int i=2; i <=((num1 < num2)? num1: num2) ; i++){
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
return gcd ;
    
}
int main(){
    int a , b ;
    cout << " numbers for gcd = "; 
    cin >> a >> b;
    cout << " gcd = " << gcd_calculate (a,b);
    return 0;
}