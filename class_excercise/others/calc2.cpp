//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/others/1_c.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: Task C

Write a better version of the calculator, calc2.cpp, that can evaluate multiple arithmetic expressions. Let’s use the semicolon symbol that must be used at the end of each expression in the input.

Assuming that the input file formulas.txt looks as follows:

15 ;
10 + 3 + 0 + 25 ;
5 + 6 - 7 - 8 + 9 + 10 - 11 ;
When we run the program with that input, the output should print 
$ ./calc2 < formulas.txt
15 
38
4
*/

#include <iostream>
using namespace std;

int main()
{          
    int sum = 0;
    int num;
    char op = '+';

    while ( cin >> num){
        
        //cout << num << endl;
        if (op == '-')
           { 
               sum -= num; // for negative op
           }
        else
           { 
               sum += num; // every other case should be positive
           }
      
        cin >> op;
        
        if (op == ';'){
            cout << sum << endl; // print sum
            sum = 0; //sum = 0 // reset sum for the next formula
        }
        }
    
    return 0;
}
