#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
bool prime_number(int);
int main(){
    int count = 0;
    for (int number=2; number<=1000; number++){
        
        if  (prime_number(number)){
            count++;
            cout << number << "\t"; 
            if (count % 10 == 0)
                cout << endl;
        }
            
    }
    
    return 0;
}
bool prime_number(int num){
   
    for (int i=2; i<=sqrt(num); i++){
        if (num % i == 0)
            return 0; // end of loop 
    }
return 1;  // so ,this line is out of loop
   
}