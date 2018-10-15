#include <iostream>
#include <math.h>
using namespace std;

long factoriel (long);

int main(){
    int i;
    
    for (i=1;  i<=10;  i++)
        cout << i <<"!= "<< factoriel(i) << endl;        
    return 0;
}
long factoriel (long sayi){
    
    if (sayi <=1)
        return 1;
    else 
        return (sayi * factoriel(sayi-1));
    
}