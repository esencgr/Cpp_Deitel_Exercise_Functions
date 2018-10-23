#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int dice_throw (void);
int main(){
    int head=0, tail=0;
    srand(time(NULL));
    for (int loop=1; loop<=100; loop++){
        if (dice_throw()== 0){
            cout << "tails ";
            tail++;
        }
        else {
            cout << "heads ";
            head++;
        }
        if ( loop % 10 == 0)
            cout << endl;
    }

    cout << "total tails = " << tail << endl;
    cout << "total heads = " << head << endl;
    cout << "% tail  = %" << 100*((double) tail / (tail + head)) << endl;
    cout << "% heads = %" << 100*((double) head / (tail + head)) << endl;
    return 0;
}
int dice_throw(void){
    return rand() % 2;
}