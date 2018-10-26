#include <iostream>
#include <math.h>
using namespace std;

int base (int b, int e){
    int product = 1;
    for (int i=1; i<=e; i++)
        product *= b;
    return product;
}
bool prime (int num){
    for (int i=2; i<num; i++){
        if (num % i == 0)
            return false;
    }
    return true;
}
int main(){
    int c=0;
    for (int i=2; c<=20; i++){
        if (prime(base(2,i)-1)){
            cout << base(2,i)-1 << endl;
            c++;
        }
    }
    return 0;
}

/*

}*/