#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
int time_calculation(int , int , int );
int main(){
    int hour,minu,sec,temp1,temp2;
    
    cout << "enter first hour-min-sec = ";
    cin >> hour >> minu >> sec;
    temp1 = time_calculation(hour,minu,sec);
    cout << "elapsed time in first = ";
    cout << temp1 << endl;
    
    cout << "enter second hour-min-sec = ";
    cin >> hour >> minu >> sec;
    temp2 = time_calculation(hour,minu,sec);
    cout << "elapsed time in second = ";
    cout << temp2 << endl;
    
    cout << "The difference between the times is =" << temp2 - temp1 ;
    
    return 0;
}
int time_calculation(int hour, int minute, int second){
    int total_time;
    if (hour > 12) {
        total_time = ((hour - 12) * 3600) + minute * 60 + second;
        return total_time;
    }
    else if ( hour < 12){
        total_time = ((hour) * 3600) + minute * 60 + second;
        return total_time;
    }
    else 
        return 0;
}