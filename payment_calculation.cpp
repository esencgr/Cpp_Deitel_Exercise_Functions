#include <iostream>
#include <math.h>
using namespace std;

double payment_calculate (double hour){
    if (hour <= 3)
        return 2.00;
    else if (hour > 3 && hour < 24)
        return 2.00 + ((hour-3)*(0.5));
    else 
        return 10.00;
}

int main(){
    double  hour;
    double  total = 0.0 , total_hour = 0.0;
    int first = 1;
    
    cout << "Enter the hours parked for 3 cars: ";

    for ( int i = 1; i <= 3; i++ ) {
      cin >> hour;
      total_hour += hour;
      
         if (first){
         cout << "car\t" << "hours\t" << "payment" <<endl;
         first = 0;
         }
         
      cout << i << "\t" << hour << "\t" << payment_calculate (hour) << endl;
      total += payment_calculate(hour); 
    }
    
    cout << "total\t" << total_hour << "\t" << total << endl;
    return 0;
}