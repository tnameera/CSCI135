/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task A

A program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate input from output).

Example:
Input width: 7
Input height: 4
 
Shape:
*******
*******
*******
*******
*/

#include <iostream>

using namespace std;

int main(){

    int  height, width;
    cout << "Enter width: ";// row
    cin >> width;
    cout << "Enter height:";// column
    cin >> height;

    cout << endl;
    cout << "Shape" << endl;

    // start printing shape

    for (int col = 0; col < height; col++)// repeat h number of times
    { 
        for (int row = 0 ; row < width; row ++) // repeat w number of times
        {    
            cout << "*" ; // gets execute h*w times
        } 

        cout << "\n" ; // to go to next line
    } 

        return 0;
}

