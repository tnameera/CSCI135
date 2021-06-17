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
            if (i<=j){
                cout << "(" << i << ", " << j << ") ";
            }
            else
            {
                cout << "(" << " " << ", " << " " << ") ";
            }
            

        }// close the inside loop

        cout << "\n";
    } // close the outside loop*/

    return 0;         
}
    
   

       
