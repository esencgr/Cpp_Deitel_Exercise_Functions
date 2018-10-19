#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
double fah_to_cel (double); // fahrenheit to celcius
double cel_to_fah(double); // celcius to fahrenheit
int main(){
    double temp;
    
    cout << " enter a temperature in fahrenheit = ";
    cin >> temp;
    cout << " tempeature is in celcius = " << fah_to_cel(temp) << "*C" << endl; 
    
    cout << " enter a temperature in celcius = ";
    cin >> temp;
    cout << " tempeature is in fahrenheit = " << cel_to_fah(temp) << "*F" <<endl;
    
    cout << "celcius\t" << "fahrenheit" << endl;
       for (int i=0; i<=100; i++){
           cout << i << "\t" << cel_to_fah(i) << endl;
       }
   
    cout << "fahrenheit\t" << "celcius" << endl;
       for (int i=32; i<=212; i++){
           cout << i << "\t" << fah_to_cel(i) << endl;
       }
    return 0;
}
double fah_to_cel(double temp){
    return (temp - 32) / 1.8;
}
double cel_to_fah(double temp){
    return (temp * 1.8) + 32;
}