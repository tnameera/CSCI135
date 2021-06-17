 //File name: /Users/syedrahman/Documents/CSCI135/class_excercise/others/1d_.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: TaskD

Write a better version of the calculator, calc2.cpp, that can evaluate multiple arithmetic expressions. Let’s use the semicolon symbol that must be used at the end of each expression in the input.

Assuming that the input file formulas.txt looks as follows:

15 ;
10 + 3 + 0 + 25 ;
5 + 6 - 7 - 8 + 9 + 10 - 11 ;
When we run the program with that input, the output should evaluate all of the expressions and print them each on its own line:

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
    char op1 = ' ';

    while ( cin >> num)
       { 
        //cout << num << op << endl;
        cin >> op1;
        if (op1 == '^'){
            num = num * num;
            //sum += num;
            //cout << num << endl; // print sum
            //sum = 0; //sum = 0 // reset sum for the next formula
        //cout << num << endl;
        }
        else 
        {
            cin.putback(op1); // to put back the power operator op1
        }
                              
        if (op == '-') // can start working with op
           { 
               sum -= num; // for negative op
               //cout <<  "sum is" << sum << endl;
           }
        else
           { 
               sum += num; // every other case should be positive
               //cout << "sum becomes " << sum << endl;
           }

           cin >> op;
        
        if (op == ';'){
            cout << sum << endl; // print sum
            sum = 0; //sum = 0 // reset sum for the next formula
            op = '+'; // optional tp make ; read as + and add 
        }
        }
            return 0;
    }
       

