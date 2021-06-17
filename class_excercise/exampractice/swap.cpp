
#include <iostream>
#include <iomanip>

using namespace std;

swap(int* m, int* n)
{
    int * temp = m;
    m = n;
    n = temp;
}

int main()
{
    int m = 5;
    int n = 6;
    swap (&m, &n);
    cout << m << " " <<  n ;
    return 0 ;
}