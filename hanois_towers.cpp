#include <iostream>
using namespace std;
void towers (int,int,int,int);
int main()
{
    int n_disk;
    cout << "Enter the starting number of disks: ";
    cin >> n_disk;
    towers (n_disk, 1, 3, 2);
    return 0;
}
void towers (int disks, int start, int finish, int temp){
    if (disks == 1){
        cout << start << " -> " << finish << endl;
        return ;
    }
    // move disks - 1 disks from start to temp
    towers (disks - 1, start, temp, finish);

    // move last disk from start to finish
    cout << start << " -> " << finish << endl;

    // move disks - 1 disks from temp to finish
    towers( disks - 1, temp, finish, start );
}
