#include<iostream>
#include<math.h>
using namespace std;
int maximum(int,int,int);

int main(){
    
    int a,b,c;
    cout << " enter 3 number:";
    cin >> a >> b >> c;
    cout << " maximum number:"<< maximum (a,b,c);
    
}
int maximum (int x,int y,int z){
    int max = x;
    
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    return max;
}