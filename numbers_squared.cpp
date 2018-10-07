#include<iostream>
#include"square.h"
using namespace std;
//int square (int);

int main(){
    cout << "enter a number: ";
    int x;
    cin >> x ;
    cout << "number^2=" << square (x) <<endl ;
}
/*
int square (int y){
    return y*y;
}*/