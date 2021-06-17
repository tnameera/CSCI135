#include <iostream>

using namespace std;

int *findMid(int s[], t int);//declaration

int main()//call
{
    int a[] = {1,2,3,4,5};
    int n  = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a,n);
    cout << *mid << endl;
    return 0;

}

int *findMid(int a[], int n)//function definition, indicate we are returning we want to return an address of some int
{
    return &a[n/2];//what you wanna see an an output
}