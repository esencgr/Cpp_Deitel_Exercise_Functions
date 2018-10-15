#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
    double x;
    srand(time(NULL));
        cout << "1 <= n <= 2  \t  --> ";
        for( int i=1; i<=5; i++){
             x = 1 + rand() % 20 ;
             cout << x / 10 << "\t";
        }
        cout << endl; 
        
        cout << "1 <= n <= 100  \t  --> ";
        for( int i=1; i<=5; i++){
             x = 1 + rand() % 100;
             cout << x << "\t";
        }
        cout << endl; 
        
        cout << "0 <= n <= 9  \t  --> ";
        for( int i=1; i<=5; i++){
             x = rand() % 10;
             cout << x << " \t" ;
        }
        cout << endl; 
        
        cout << "-1 <= n <= 1  \t  --> ";
        for( int i=1; i<=5; i++){
             x = 10 - rand() % 20  ;
             cout << ( x/10 ) << " \t";
        }
        cout << endl; 
        
        cout << "-3 <= n <= 11  \t  --> ";
        for( int i=1; i<=5; i++){
             x = rand() % 15 - 3 ;
             cout << x << "  \t" ;
        }
        cout << endl;
        
        cout << "1000 <= n <= 1012 --> ";
        for( int i=1; i<=5; i++){
             x = 1000 + rand() % 13;
             cout << x << "\t";
        }
        cout << endl;
    return 0;
}