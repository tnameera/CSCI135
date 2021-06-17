/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz 8

Define class Date, which contains public integer members year month day and string member day_of_week. Define function `void printDate(Date * input)` 
that prints Date in format, day of week, mo/day/yr “Friday, 10/29/19” “Thursday, 1/3/18”
*/

#include <iostream>
#include <string>

using namespace std;

//step 1
// make a class
class Date{// Define class named Date
public:

    int year;
    int month;
    int day;
    string day_of_week;
};

//void funciton that takes Date pointer
void printDate(Date *input) {// derefernce date to input
// point value to the varibales of date
    cout << input->day_of_week << ", " << input->month << "/" << input->day << "/" << input->year << endl;
}
//call  main function
// it should print “Friday, 10/29/19” “Thursday, 1/3/18”
int main() {
    
    Date d1;
    d1.month = 10;
    d1.day = 29;
    d1.year = 19;
    d1.day_of_week = "Friday";

    Date d2;
    d2.month = 1;
    d2.day = 3;
    d2.year = 18;
    d2.day_of_week = "Thursday";

    printDate(&d1);
    printDate(&d2);
    return 0;
}