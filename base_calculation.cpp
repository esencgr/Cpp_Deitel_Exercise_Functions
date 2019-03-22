#include <iostream>
#include <math.h>
using namespace std;
int base (int,int);

int main(){
    int floor,exponent;

    cout << "enter floor and exponent:";
    cin >> floor;
    cin >> exponent;

    cout << floor << " ^ " << exponent << " = " << base (floor,exponent);

    return 0;
}
int base (int t,int u){
    int product=1;
    for (int i=1; i<=u; i++)
        product *=  t;

return product;
}
