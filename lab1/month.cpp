/*
Author: Syeda Nameera Tahseen
Course: CSCI-136
Instructor: Melissa Lynch
Assignment: TaskD, Lab1A

A program month.cpp that asks the user to input the year and the month (1-12) and prints 
the number of days in that month (taking into account leap years).
You may not use switch case or arrays even if you know these language constructs.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Enter year: " ; //2017
    int year, month;
    cin >> year;
    cout << "Enter month: "; // 5
    cin >> month;

    if (month == 2){ // check for feb 29/28 days
        //check leap year or not
        //cout << "Enter year: "; // 2016
        //int year;
        //cin >> year;

        if (year % 4 != 0) {
        cout << "28 days" << endl;
        }
        else if (year % 100 != 0) 
        {cout << "29 days" << endl;
        }
        else if (year % 400 != 0) {
        cout << "28 days" << endl;
        }
        else cout << "29 days" << endl;
    }
   
    else if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "31 days" << endl; // check the month with 31 days
    }
    else {
        cout << "30 days" << endl; // check the month for 30 days
    }


    return 0;
}
