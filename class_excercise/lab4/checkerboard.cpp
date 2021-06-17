/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task B

A program checkerboard.cpp that asks the user to input width and height 
and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).

Example:
Input width: 11
Input height: 6
 
Shape:
* * * * * *
 * * * * * 
* * * * * *
 * * * * *
* * * * * *
 * * * * *
*/

#include <iostream>

using namespace std;

int main(){

    int  height, width;
    cout << "Enter width:";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << endl;
    cout << "Shape: " << endl;
    

    for ( int i = 0 ; i< height; i++)
    {
        //cout << " i " << i << endl;
        for (int j = 0; j< width; j++)
        {
            // j%2 ==0 j even; i%2 == 0 i even
            // j%2 !0 j even; i%2 != 0 i odd
            // check if j and i are odd or even
            //j is col index (width) and j is row index(height)
            //cout << i << j << j % 2 << i % 2 << endl;
            if (j % 2 ==0 && i % 2 ==0)
            {
                cout << "*";
            }
            else if (i % 2 == 0 && j % 2 != 0)

            {    
                cout << " ";
            }

            else if (i % 2 != 0 && j % 2 != 0)

            {    
                cout << "*";
            }
            else if (i % 2 != 0 && j % 2 == 0)

            {    
                cout << " ";
            }

        }// close the inside loop

        cout << "\n";

    } // close the outside loop*/

    return 0;         
}
    
   

       
