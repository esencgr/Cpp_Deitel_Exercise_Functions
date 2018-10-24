#include <iostream> 
#include <unistd.h>
using namespace std;
int main()
{
    static int count = 1;
    cout << count << endl; 
    ++count;
    sleep(1);
    main();
}