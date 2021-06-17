/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task C

A program cross.cpp that asks the user to input the shape size, 
and prints a diagonal cross of that dimension.

*/

#include <iostream>

using namespace std;

int main(){

    int size;
    cout << " Enter a number: ";
    cin >> size;
    cout << endl;

    for ( int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j< size; j++)
        {
            if (i == j || j == size -i - 1)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
