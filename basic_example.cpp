#include <iostream>
using namespace std;
int function (int, int);

int main(int argc, char **argv)
{
    int x,y;
    do {
    cout << "enter two number:";
    cin >> x;
    cin >> y;
    cout << function (x , y) << endl;
    } while ( x != -1);
    return 0;
}

int function(int a , int b){
    if (a % b == 0)
        return 1;
    else
        return 0;
 
}