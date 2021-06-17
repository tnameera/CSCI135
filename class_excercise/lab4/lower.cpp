/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task D

A program lower.cpp that prints the bottom-left half of a square, given the side length.

Example:
Input side length: 6
 
Shape:
*
**
***
****
*****
******
*/

#include <iostream>

using namespace std;

int main(){

    int side;
    cout << "Input side length: ";
    cin >> side;
    cout << endl;

    for (int i = 0; i < side ; i++){

        for ( int j = 0; j <= i; j++)
        
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
