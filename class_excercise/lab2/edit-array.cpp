/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskC, Lab1A

A program edit-array.cpp that creates an array of 10 integers, 
and provides the user with an interface to edit any of its elements..
*/

#include <iostream>

using namespace std;

int main(){

    //Create an array myData of 10 integers.
    int myData[10]; 
    
    // Fill all its cells with value 1 (using a for loop).5

    int i, idx, val;
    for ( i = 0; i <10; i++){
        myData[i] = 1;
     }
     
    //The repetition of the step with a do while loop:.
    do {
        // print the array
        for ( i = 0; i <10; i++){
            cout << myData[i] << " ";
        }
        cout << endl;

        //get idx and val  from the user
        cout << "Enter idx: ";
        cin >> idx;
        cout << "Enter val: " ;
        cin >> val;
        
        // if i is good, update the array at index i
        if (0 <= idx  && idx < 10){
            myData[idx] = val;
        }

    } while (0 <= idx && idx < 10); // if the index was good, repeat

    cout << "Index out of range. Exit." <<endl;
    return 0;
}
