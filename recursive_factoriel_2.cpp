#include <iostream>
#include <math.h>
#include <iomanip>
using std::setw;
using namespace std;
void print (int);
long factoriel (long);

int main(){
    int i;
    
    for (i=1;  i<=10;  i++)
        cout << i << "*" << (i-1) <<"!= "<< factoriel(i) << endl;        
    return 0;
}
long factoriel (long number){
    
    if (number <=1)
        return 1;
    else 
        print (number) ;
        return (number * factoriel(number-1));
    
}
void print (int n){
    cout << "number =" << setw( n ) << n << endl; 
}