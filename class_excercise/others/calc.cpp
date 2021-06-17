//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/others/calc.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: Project 1B

Redirect a file into a program , it should compute the sum.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
   
   int sum = 0;
   char op='+';
   int num;

   while(cin >> num){
        if ( op == '+')
                sum += num;
        if (op == '-')
                sum -= num;
        cin >> op;
        //cout << num << endl;
        //cout << op << endl;

   }
   cout << sum <<endl;
    return 0;
}
