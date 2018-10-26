#include <iostream>
using std::cout;
using std::endl;

template < class T >
void min( T value1, T value2 ) // find the smallest value
{
    if ( value1 > value2 )
    cout << value2 << " is smaller than " << value1;
    else
    cout << value1 << " is smaller than " << value2;
 cout << endl;
}

 int main()
 {
    min( 7, 54 ); // integers
    min( 4.35, 8.46 ); // doubles
    min( 'g', 'T' ); // characters

 return 0;
 }