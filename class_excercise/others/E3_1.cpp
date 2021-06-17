/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1

Write a program that reads an integer and prints whether it is negative, zero, or positive
*/

#include <iostream>

using namespace std;

int main(){

    cout << " Enter a number: ";
    int num;
    cin >> num;

    if (num < 0)
    cout << "negative" << endl;// will print out for all negative values

    else if (num > 0)
    cout << "positive" << endl;

    else 
    cout << "zero" << endl;


    return 0;
}
