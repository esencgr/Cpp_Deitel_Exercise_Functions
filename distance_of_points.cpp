#include <iostream>
#include <math.h>
using namespace std;
double distance(double,double,double,double);

int main(){
    double x1, y1, x2, y2;
    cout << "please enter coordinate of two point."<< endl;
    
    cout << "A(x1,y1) = ";
    cin >> x1;
    cin >> y1;
        
    cout << "B(x2,y2) = ";
    cin >> x2;
    cin >> y2;
    cout << endl;
    
    cout << "A and B between distance = " << distance (x1, y1, x2, y2); 
    return 0;
}
double distance(double x1, double y1, double x2, double y2){
    return sqrt (pow((x1-x2),2) +  pow((y1-y2),2));
}