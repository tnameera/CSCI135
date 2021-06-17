/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task F

A program trapezoid.cpp that prints an upside-down trapezoid of given width and height.

However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!

Example 1:
Input width: 12
Input height: 5
 
Shape:
************
 **********
  ********
   ******
    ****
*/

#include <iostream>

using namespace std;

int main(){

    int width, height; // declare all variables
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl;
    cout << "Shape";
    cout << endl;

    if (width % 2 == 0 && height > width/2) // width even
    {
        cout << "impossible shape!" <<  endl;

    }
    else if ( width % 2 != 0 && height > width/2 + 1)//width is odd
    {
        cout << "impossible shape!" <<  endl;
    }
    else
    {
        int spaces  = 0;
        int stars = width;
        //Loop to cout height
        for (int i = 0; i < height; i++)
        {
            //loop to print spcaes
            for (int s = 0; s < spaces; s++)
            cout << " ";

            //Loop to print stars
            for (int j = 0; j < stars; j++)
            cout << "*";

            // adding new line after printing all the stars
            cout << endl;

            //taking 2 star off 1 from each side
            stars = stars -2;

            //increase num spaces to indent stars
            spaces++;

        }
    }
        return 0;
    }