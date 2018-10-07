#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int number,count1=0,count2=0,count3=0;
    int count4=0,count5=0,count6=0;
    
    srand(time(NULL));
    for (int i=1;  i <= 600;  i++){

        number = 1 + (rand () % 6);
        
        switch (number){
            case 1:
                count1++;
            break ;
            case 2:
                count2++;
            break ;
            case 3:
                count3++;
            break ;
            case 4:
                count4++;
            break ;
            case 5:
                count5++;
            break ;
            case 6:
                count6++;
            break ;
            }
    }
    
    cout << " frequency 1 = " << count1 << endl;
    cout << " frequency 2 = " << count2 << endl;
    cout << " frequency 3 = " << count3 << endl;
    cout << " frequency 4 = " << count4 << endl;
    cout << " frequency 5 = " << count5 << endl;
    cout << " frequency 6 = " << count6 << endl;
return 0;
}