#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
double hypotenuse(double x,double y){
    return sqrt((x*x)+(y*y));
}
int main(){
    double side1 , side2 ;
    int count=1;
    for (int i=1; i<=3; i++){
            cout << "enter two side of triangle = ";
            cin >> side1;
            cin >> side2;
            
            if (count==1){
                cout << "triangle\t" << "side1\t" << "side2\t" << "hypotenuse" << endl;
                count = 0;
            }
            cout << i << "\t\t" << side1 << "\t" << side2 << "\t" << hypotenuse( side1, side2) << endl ;
    
}

    return 0;
}