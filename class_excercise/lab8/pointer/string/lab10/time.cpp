/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Task A

Create a new program time.cpp. (Copy the class Time declaration in your program,
it should be placed before main() function.)
*/

#include <iostream>

using namespace std;

class Time { 
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time);
//converts hours to minutes *60(e.g if h == 2, 2*60=120 mins and add minutes (e.g m ==23, 120+23 =143)

//Task B
int minutesUntil(Time earlier, Time later);
// take earleir minutes past midnight, and then later MPM, and then find tne differnce
//time0 == {2,23} == 143 MPM 
//min == 45
//convert time0 to 143 MPM, add 45, 143+45 = 188
//converts 188 to hours and mins
// int div by 60 , modulo by 60
// time1.h = totalmin/60
//time1.m = totalmin%60


//Task C

Time addMinutes(Time time0, int min);
void printitmes(Timeslot ts);
//movie Title and duration  [startime and end time]
// calculate the endtime add minutes (ts.starttime) 
// back to Future COMEDY (116 min)[starts at 9:15, ends by 11:11]
//printMovie (ts.movie)

//Task D
TimeSlot sceduleafter (TimeSlot ts, Movie nextMOvies);
//nextMovie is newTS.mv
//calculate end time for its ts.movie
//starttme is immediately followig end time


//Task E



int main(){

Time t1 = {10, 30};// accessing h and m
Time t2 = {8, 25};

//These moments of time are X and Y minutes after midnight.
//The interval between them is Z minutes.


    return 0;
}
