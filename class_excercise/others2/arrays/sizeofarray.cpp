#include <iostream>

using namespace std;


int main()
{
    int a[] = { 2, 1, 25, 33, 25, 62, 2, 16, 11, 45, 25, 87, 5, 7, 19, 65, 36, 56, 58, 65, 25, 5, 6,};
    //both the commands below work:
    cout << (sizeof(a) / sizeof(a[0])) << endl;
    //cout << sizeof(a) << "," << sizeof(a[0]) << "," << result << endl;

}