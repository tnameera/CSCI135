/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.1

A function

void sort2(double* p, double* q)
that receives two pointers and sorts the values to which they point. If you call

sort2(&x, &y)
then x <= y after the call.
*/

#include <iostream>

using namespace std;

void sort2(double *p, double *q)
{
    if (*p > *q)// If p and q are not sorted

    {   double tempnum;
        tempnum = *p;
        *p = *q;
        *q = tempnum;
    }
}
int main(){

    double x = 4;
    double y = 2;
    
    sort2(&x, &y);
    cout << " value of x is "  << x <<  " " << " value of y is " << y << endl;
    return 0;
}
