
/*
Author: Syeda Nameera Tahseen
Course: CSCI-136
Instructor: Tong Yi
Assignment: Project 1B

A program sum.cpp that reads a sequence of integers from cin, and reports their sum. 
*/
// given frmila like
// 3+5=6
//read the number
//add or subtract from the current sum
//
// add 3 to the sum( since the operation for the first operand 3)
//is addition
//
// prepare next round
//the pre-number operator for the second number
//the pre-number operator for 5 is +
//read the second number
//update the sum based on the operation right before
//second number 5
//
//set the sum ot be 0
// set the pre-operation operator for the first number
// set 3 in htis example  to be "+"
// read the first number 
// update the sum by operatingon the first num
//  prepare for the next round,that is
// read the next number
// update the sum by the operating on that second num.
//prepare for the next round
#include <iostream>

using namespace std;

int main()

{
   int sum = 0;
   int num;

   while (cin >> num){
      sum += num ;//add num to sum
      cout << num << " " << sum <<endl;
        }
      cout << sum << endl; //TODO print the value of sum
   return 0;
}



------------------------
int main(){

        int sum =0;
        int num ;
        char ch = '+';


        while (cin >>num){

                if (ch == '+')
                        sum+=num;
                else 
