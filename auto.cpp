#include<iostream>
using namespace std;

int main (){
    
    auto f = [](int k) { return k * 5; };
    auto f1 = []<typename T>(T x, T y) { return x * y; };

    std :: cout << f(100) << endl;
    std :: cout << f1(100, 100) << endl;

    printf("\n");
    return 0;
} 