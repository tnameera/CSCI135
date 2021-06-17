/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TasksB, Lab1A

Write a program print-interval.cpp that asks the user to input two integers
L and U (representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces.
Notice that we include the lower limit, but exclude the upper limit.
Please enter L: -5
Please enter U: 10

-5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Please enter L:"; // -5
    int L,U;
    cin >> L;
    cout << "Please enter U:";
    cin >> U;
    int i;

    // the body of the loop will get executed for 
    // all values of i starting at L
    // and ending at the largest integer less than U
    for(i = L; i < U; i++) {
        cout << i << " ";
    }

    cout << endl;
    //cout << "Last value of i : " << i << endl;
    
    return 0;
}
