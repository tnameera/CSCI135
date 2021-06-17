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

    int width, height;

    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl;

    if (height > width/2){
        cout << "Impossible shape!" << endl;
        return 0;
    }
    cout << "Shape:" << endl;
    for (int i = 0; i < height ; i++){
        for ( int j = 0; j < width; j++){
            if (j <i ){
                cout << " ";
            }
            else if (j > width - i - 1){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}