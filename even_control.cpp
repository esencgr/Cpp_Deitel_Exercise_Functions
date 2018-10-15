#include <iostream>
using namespace std;
int function (int);

int main(int argc, char **argv)
{
    int x,y;
    do {
    cout << "enter number:";
    cin >> x;
    cout << function (x) << endl;
    } while ( x != -1);
    return 0;
}

int function(int a ){
    if (a % 2 == 0)
        return 1;
    else
        return 0;
 
}