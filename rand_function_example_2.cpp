#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
    int x;
    srand(time(NULL));
    cout << "one of 2,4,6,8 numbers --> ";
    cout << 2 * (1 + rand() % 4) << endl ; 
 
    cout << "one of 3,5,7,9,11 numbers --> ";
    cout << 1 + 2 * (1 + rand() % 5 ) << endl ;
 
    cout << "one of 6,10,14,18,22 numbers --> ";
    cout << 6 + 4 * (rand() % 4 ) << endl ; 
  
    return 0;
}