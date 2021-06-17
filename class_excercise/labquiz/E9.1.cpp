/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.1

We want to add a button to the tally counter in Section 9.2 that allows an operator
to undo an accidental button click. Provide a member function

void undo()
that simulates such a button. As an added precaution, make sure that the operator
cannot click the undo button more often than the count button.
*/

#include<iostream>
#include<string>
using namespace std;
ifndef_COUNTER_H
define_COUNTER_H
class Counter {
public://operations,methods
  void reset();
  void count();
  int get_value() const;

private://data members
  int value;
}; 
void Counter::count() {
  value++;
}
void Counter::reset() {
  value = 0;
}
int Counter::get_value() const {
  return value;
}


//code
//assuming counter variable as c
//c is the number of times count button is pressed
//Code :
void undo(){
    if(count>0)
    count--;
    else {
    //undo button cannot be pressed
    cout<<"Cannot press undo button";
    }
}
    /*
    //assuming counter variable as c
    //c is the number of times count button is pressed
    Code :
    #include<iostream>
    using namespace std;
    void undo(){
    if(count>0)
    count--;
    else {
    //undo button cannot be pressed
    cout<<"Cannot press undo button";
    }*/

int main() {
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
