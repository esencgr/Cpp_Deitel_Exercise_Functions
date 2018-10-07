#include <iostream>
#include <math.h>
using namespace std;
/// gcd = en buyuk ortak bolen
int gcd_calculate  ( int num1 , int num2 ){
    int divider = 2;
    int gcd = 1;
    
    while ( num1 > 1 || num2 > 1){
        
        if (num1 % divider == 0   && num2 % divider == 0 ){
            
            gcd *= divider;
            num1 /= divider;
            num2 /= divider;
        }
        else if (num1 % divider == 0)
                 num1 /= divider;
        else if (num2 % divider == 0)
                 num2 /= divider;
        else
            divider++ ; 
    } 
return gcd ;
      
}
int main(){
    int a , b ;
    cout << " numbers for gcd = "; 
    cin >> a >> b;
    cout << " gcd = " <<gcd_calculate (a,b);
    return 0;
}