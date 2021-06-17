//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/interger_while.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: title, eg. Lab 1A

briefly describe what program does
*/
#include <iostream>
using namespace std;

int main()
{
   
   int num; 
   do {

        cout << " ENTER AN INT  {0,100 }:";
        cin >> num;

   }while ( num < 0 || num > 100);
        cout < "num" << num <<endl;

   return 0;
}
