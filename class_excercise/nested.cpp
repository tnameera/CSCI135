//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/nested.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: title, eg. Lab 1A

briefly describe what program does
*/

// givem sufficient $2 ands $5 bills
//find all possible ways to get $12=5
// let x to be number of $2 and y to be number of $5
// for all int xna d y such that
// x in [0\\, 15/2 and y in [0, 15/5]
//
#include <iostream>
using namespace std;

int main()
{
  int amout = 14;
  for (int x =0; x <= 15 /2; x ++ )
  {

        for (int y = 0; y <=15/5; y++)
                if (2*x + 5 * y == 15)
                        cout <<
   
    return 0;
}
