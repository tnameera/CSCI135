/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task G

A program checkerboard3x3.cpp that asks the user to input width and height and 
prints a checkerboard of 3-by-3 squares. (It should work even if the input dimensions are not a multiple of three.

*/

#include <iostream>

using namespace std;

int main(){

    int width, height; // declare all the variables

    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl;

    for (int i = 0; i < height ; i++){
        //cout << "i" << i;
        for ( int j = 0; j < width; j++)
        { //cout << "j" << j;
            if ((j / 3) % 2 == ( i / 3) % 2)// condition to print stars
            
            {
                cout << "j" << j << "i" << i << "|";
                //cout << "*";
            }
            else // add space
            {
                cout << "    " << "|";
            }
            
        }
        cout << endl;// add new line after each row
    }// end of loop
    return 0;
}