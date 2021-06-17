/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5

A program that reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, 
and “neither” otherwise. Here, “increasing” means “strictly increasing”,
with each value larger than its predecessor. The sequence 3 4 4 would not be considered increasing.
*/

#include <iostream>

using namespace std;

int main(){
    int  num1, num2, num3;
    cout << " Enter first number ";
    cin >>  num1;
    cout << " Enter second number ";
    cin >>  num2;
    cout << " Enter third number ";
    cin >>  num3;

    if (num1 < num2 &&  num2 < num3)
        cout  << "increasing" << endl;

    else if (num1 > num2 && num2 > num3)
        cout << "decreasing" << endl;
        
    else
        cout << "neither" << endl;

    return 0;
}
