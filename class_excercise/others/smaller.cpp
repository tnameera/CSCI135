
//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/smaller.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI-136
Instructor: their name
Assignment: Lab1A

A program smaller.cpp that asks the user to input two integer numbers and prints 
out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main()
{
   
   cout << "Enter the first_number: "; //Enter first number
   int first_number;
   cin >> first_number;


   cout << "Enter the second_number: ";//Enter second number
   int second_number;
   cin >> second_number;

   //cout << first_number << endl << second_number << endl;

   int smaller;

   if (first_number < second_number){ //TODO find out the smaller number
   smaller = first_number;
   cout << "The smaller of the two is " << first_number << endl;
   }else{
   smaller = second_number;
   cout << "The smaller of the two is " << second_number << endl;
        }

    return 0;
}
