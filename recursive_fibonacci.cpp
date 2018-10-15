#include <iostream>
#include <math.h>
using namespace std;

long fibonacci (long);

int main(){
    
    int i;
   
    cout << "enter a number :"; 
    cin >> i;
    while (i!=-1){
    cout << "fibonacci("<< i <<")=" << fibonacci(i) << endl; 
    cout << "enter a number exit(-1):"; 
    cin >> i;
    }

}
long fibonacci (long sayi){
    
    if (sayi==1 || sayi==0)
        return sayi;
    else 
        return fibonacci (sayi-1) + fibonacci (sayi-2);
    
}