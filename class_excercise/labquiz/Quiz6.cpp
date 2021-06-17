/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 06

Lab Quiz 06: 
define function `int max3(int a, int b, int c)` that returns the maximum of a, b, and c.
*/

#include <iostream>

using namespace std;

int max3(int a, int b, int c)
{
    if (a > b & a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main(){

    
    cout << "Maxium is: " << max3(8,7,9);
    cout <<endl;
    
    return 0;
}
