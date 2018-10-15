#include <iostream>
#include <math.h>
using namespace std;

double round_integer  (double); //tamsayıya yuvarla
double round_tenner  (double); //onluga yuvarla
double round_hundred (double); //yuzluge yuvarla 
double round_thousand (double); //binlige yuvarla 

int main(){
    double x;
    do {
        cout << "enter x (double) (exit -1) = "; 
        cin >> x;
        
        cout << "round integer  x = " ;
        cout << round_integer(x) << endl;
        cout << "round tenner   x = " ;
        cout << round_tenner(x) << endl;
        cout << "round hundred  x = " ;
        cout << round_hundred(x) << endl;
        cout << "round thousand x = " ;
        cout << round_thousand(x)<< endl;
    } while (x != -1);
    return 0;
}
double round_integer (double a){
    return floor (a + 0.5);
}
double round_tenner (double a){
    return floor ((a*10) + 0.5)/10;
}
double round_hundred (double a){ 
    return floor ((a*100) + 0.5)/100;
}
double round_thousand (double a){
    return floor ((a*1000) + 0.5)/1000;
}