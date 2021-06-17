/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch S
Assignment: TasksA, Lab1A

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should 
keep asking to re-enter until a valid number is input.

Please enter an integer: -10
Please re-enter: 1200
Please re-enter: 100
Please re-enter: 7

Number squared is 49
*/

#include <iostream>

using namespace std;

int main(){

    //get an initiail input from use
    cout << "Please enter an integer:";
    int num;//Please enter an integer: -10
    cin >> num;
 
    // keep asking till the number is valid number is provided
    // while the number is invalid we want to ask for new integer
    //input an integer in the range 0 < n < 100
    //invalid if the number is not in the correct range
    //num <= 0 || num >=100)

    while (!(num > 0 &&  num < 100)){
        cout << "Please re-enter:" ;
        cin >> num;
    }
    // we have reach this point where we can figure out if a valid number was provided
    // print the number sqaured
        cout << "Number sqaured is:" << num * num << endl; 

    
    return 0;
}
