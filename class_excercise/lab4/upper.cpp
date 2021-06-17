/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task E

A program upper.cpp that prints the top-right half of a square, given the side length.

Example:
Input side length: 5
 
Shape:
*****
 ****
  ***
   **
    *
*/

#include <iostream>

using namespace std;

int main(){

    int side;
    cout << "Input side length: ";
    cin >> side;
    cout << endl;


    for (int i = 0; i < side ; i++){

        for ( int j = 0; j <side; j++)
        {
            if (i <= j)
                cout << "*";
            else
                cout << " ";
        }
        
        cout << endl;
    }
    return 0;
}