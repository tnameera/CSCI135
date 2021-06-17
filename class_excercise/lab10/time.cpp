/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task A, Lab 10

Create a ne(Copy the class Time declaration in your program, 
it should be placed before main() function.)
*/

#include <iostream>

using namespace std;

class Time { 
public:
int h;
int m;
};

//Task C

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};



//Task A
int minutesSinceMidnight(Time time)
    {
        return(time.h*60+time.m); // returns the number of minutes from 0:00 am until time
    }

int minutesUntil(Time earlier, Time later)//the difference from start to stop
    {
   
    
    int earlier_till_mid = minutesSinceMidnight(earlier);
    int later_till_mid = minutesSinceMidnight(later);
    return(later_till_mid - earlier_till_mid);


    }

//Task B
Time addMinutes(Time time0,int min)
    {
    time0.h = (time0.h*60 + time0.m + min)/60;//finding out the total minutes to deteremine hrs
    time0.m = (time0.h*60 + time0.m + min)%60;// finding out the total minutes to determine minutes
    return time0;
    }

//Task C

void printTime(Time time){
    cout << time.h << ":" << time.m;
}

//given

void printTime(TimeSlot ts);
void printMovie(Movie mv);


// movie title and duration [start and end time]
//calculate endtime using addMinute(ts.starttime, duration)this will give us endtime
//cout Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]
//first part printMovie(ts.movie) then start and end time


void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts)
{
    // movie Title and duration [starting and end time]
    //calculate endtime using addMinutes(ts.startime, movie.duration)
    //Back  to the Future COMEDY (116 mins) [starts at 9:15, end by 11:11]
    //The ending time is the starting time + movie duration
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);//??
    printMovie (ts.movie);// depending on the timing the movie schedule in printmovie should ne pointed
    cout << " [starts at ";
    printTime(ts.startTime);
    cout << " , ends by " ;
    printTime (endTime);
    cout << "]";
    cout << endl;
    
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
   //call the addmMinutes function to get the next show time
    Time nextShowTime = addMinutes(ts.startTime, ts.movie.duration);
    //Time nextShowTime = addMinutes(ts.startTime, nextMovie.duration);
   //create the next time slot
    TimeSlot nextTimeSlot = { nextMovie, nextShowTime};
    
   return  nextTimeSlot;
}

//Task E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    //use minutesUntil to find how long is the interval 
    // between the start time of 2 movies
    int interval = minutesUntil(ts1.startTime, ts2.startTime);

    //if the movie duraiton is > than the interval return true
    //the reuturn false otherise
    if (interval >= 0)
    {
        if (ts1.movie.duration > interval)
            return true;
        else
            return false;
    }
    if (interval < 0){
        if(ts2.movie.duration > -(interval))
            return true;
        else
            return false;
    }
    return false;
}


int main(){

    //Task A
    Time t1,t2;
    cout << "Enter first time: ";
    cin >> t1.h >> t1.m;
    cout << "Enter second time: ";
    cin >> t2.h >> t2.m;
    cout << "These moments of time are " << minutesSinceMidnight(t1) << " and " << minutesSinceMidnight(t2) << " minutes are midnight." << endl;
    cout << "The interval between them is " << minutesUntil(t1,t2) << 
    " minutes." << endl;

    //Task B
    Time time;
    time.h=14;
    time.m=45;
    time=addMinutes(time,30);
    cout << time.h << ", "<< time.m << endl;
    //return 0;

    //Task C

    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Nomadland", DRAMA, 107};
    Movie movie4 = {"Parasite", DRAMA, 132};
    Movie movie5 = {"3 idiots", COMEDY, 170};

    TimeSlot morning = {movie1, {9, 15}};
    TimeSlot daytime = {movie2, {12, 15}};
    TimeSlot evening = {movie4, {16, 45}};

    // adding the two time slots

    TimeSlot noon = {movie3,{12,30}};
    TimeSlot night = {movie5,{20,20}};

    printTimeSlot( morning );
    printTimeSlot( daytime );
    printTimeSlot( evening );
    printTimeSlot( noon );
    printTimeSlot( night );


    // Task D

    TimeSlot ts_after = scheduleAfter(noon, movie1);
    printTimeSlot(ts_after);

    //Task E

   // create a new movie named movie5
   Movie movie6 = { "Titanic", DRAMA, 120 };

   // create a new time slot named ts1 for the movie5
   TimeSlot ts1 = { movie6,{ 16, 00 } };

   // create a new movie named movie6
   Movie movie7 = { "Bridesmaids", COMEDY, 132 };

   // create a new time slot named ts2 for the movie6
   TimeSlot ts2 = { movie7,{ 16, 20 } };

   // print the time slot ts1
   printTimeSlot(ts1);

   // print the time slot ts2
   printTimeSlot(ts2);

   // call the timeOverlap function with ts1 and ts2 to
   // determine whether two time slots are overlaped
   bool result = timeOverlap(ts1, ts2);

    //cout << "Does movie 6 and 7 overlap? " << std::boolalpha << result << endl;

    // print the overlapping result
   if (result)
       cout << "\nThe two time slots are overlapped." << endl;
   else
       cout << "\nThe two time slots are not overlapped." << endl;

    return 0;


}
