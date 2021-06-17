//File name: /Users/laptopuser/Documents/courses/cs135/sect9_1_9_2/Counter_Example/TallyCounter.cpp
#include "Counter.hpp"
#include <iostream>
using namespace std;

int main() //define and use 2 Counter objects to test class
{
    Counter tally;
    tally.reset();
    tally.count();
    tally.count();
    int result = tally.get_value();
    cout << "Value of tally: " << result << endl;
    tally.count();
    tally.count();
    result = tally.get_value();
    cout << "Value of tally: " << result << endl;
   
    Counter concert_counter;
    concert_counter.reset();
    concert_counter.count();
    concert_counter.count();
    concert_counter.count();
    result = concert_counter.get_value();
    cout << "Value of concert_counter: " << result << endl;

    return 0;
}
