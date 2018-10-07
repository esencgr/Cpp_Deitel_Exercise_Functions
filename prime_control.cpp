#include <iostream>
#include <math.h>
using namespace std;

int prime (int x){

   for (int i = 2; i <= x/2; i++ ){
       
       if ( x % i == 0 ) return 0;
        
   }
        return 1; 
}
int main(void){
    
int number;
int result;
    do {
        cout << " enter number = " ;
        cin >> number;
        result = prime (number); 
           if ( !result )
               cout << " the number is not prime! try again.." << endl;
    }while ( !result ) ;
    
    cout << " the number is prime";
    
    return 0;
}
