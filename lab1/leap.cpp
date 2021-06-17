/*
Author: Syeda Nameera Tahseen
Course: CSCI-136
Instructor: Melissa Lynch
Assignment: TaskC, Lab1A

A program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). 
If the input year is a leap year according to the modern Gregorian calendar,
it should print Leap year, otherwise, print Common year.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Enter year: "; // 2016
    int year;
    cin >> year;

    //determine if year id leap or not 
    //print leap year or common year

    //if (year is not divisible by 4) then (it is a common year)
    if (year % 4 != 0) {
    cout << "Common year" << endl;
    }
    //else if (year is not divisible by 100) then (it is a leap year)
    else if (year % 100 != 0) 
    {cout << "Leap year" << endl;
    }
    //else if (year is not divisible by 400) then (it is a common year)
    else if (year % 400 != 0) {
    cout << "Common year" << endl;
    }

    //else (it is a leap year)
    else cout << "Leap year" << endl;

    return 0;
}
