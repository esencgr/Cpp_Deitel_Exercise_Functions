#include <iostream>
#include <math.h>
using namespace std;
/// lcm  = en kucuk  ortak kat.
int lcm_calculate ( int num1 , int num2 ){
    int divider = 2;
    int lcm = 1;
    
    while ( num1 > 1 ||  num2 > 1){
        
        if (num1 % divider == 0   &&  num2 % divider == 0 ){
            
            lcm *= divider;
            num1 /= divider;
            num2 /= divider;
        }
        else if (num1 % divider == 0){
                 lcm *= divider;
                 num1 /= divider;
        }
        else if (num2 % divider == 0){
                 lcm *= divider;   
                 num2 /= divider;
        }
          
        else
            divider++ ; 
    } 
return lcm ;
      
}
int main(){
    int a , b ;
    cout << " numbers for lcm = "; 
    cin >> a >> b;
    cout << " lcm = " << lcm_calculate (a,b);
    return 0;
}
