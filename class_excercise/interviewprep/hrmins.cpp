

#include <iostream>

using namespace std;

class Time { 
public:
int h;
int m;
};

Time addMinutes(Time time0,int min)
    {

    time0.h = (time0.h*60 + time0.m + min)/60;//finding out the total minutes to deteremine hrs
    time0.m = (time0.h*60 + time0.m + min)%60;// finding out the total minutes to determine minutes

    return time0;

    }

int main(){
       
    Time time;
    time.h=14;
    time.m=45;
    time=addMinutes(time,30);
    cout<<time.h<< ", "<<time.m;
    return 0;
}