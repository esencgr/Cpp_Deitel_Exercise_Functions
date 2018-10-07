#include <iostream>
#include <math.h>
using namespace std;

int gcd_calculate  ( int num1 , int num2 ){
  
    int gcd = 1;
    int divider = 2;
 
    for  ( int i = 0 ; i <= num1 ; i++){
        
        if (num1 % divider == 0   &&   num2 % divider == 0 ){
            
            gcd *= divider;
            num1 /= divider;
            num2 /= divider;
            if (num1 == 1)
                break;
        }
        else if (num1 % divider == 0)
                 num1 /= divider;
        else if (num2 % divider == 0)
                 num2 /= divider;
        else 
            divider++;
    } 
    
return gcd ;
      
}
int main(){
    int a , b ;
    cout << " numbers for gcd = "; 
    cin >> a >> b;
    cout << gcd_calculate (a,b);
    return 0;
}