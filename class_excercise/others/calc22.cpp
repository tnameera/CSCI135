//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/others/1_c.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: title, eg. Lab 1A

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

// give a bunch of formulas , ended by
//calculate and  print the sum
// 3+5 =6;
//-6 -7 + 8;
//10+2 -3 +6;
//chalenging
// we get a; to process

// set pre-operator for the first number to be "+' save in ch;
// set the sum to 0;
// declare num as an int, which saves the values of the current incoming nb
// as long there is num // while ( cin >> num);
// begin
//   (1) based on ch, the pre -operator for the current number //if (ch == '+')
//    adjust sum // sum+=num
//   (2) prepare for the operator for the next integer, we might need to skip unknown number of spaces 
//to get that sum.//cin >> ch
// we might need to skip unknown number of spaces to get that sum
//   (3)now ch maybe +, - or ;
//if + or - we cannot do anything now reason: + or - is pre-operator before next number
//we need to incorporate + or  - with next number  in (1)
//but ch mgith be ; after the current number say 3;//end of the current formula
//if (ch == ';')
//print sum
//sum = 0 // reset sum for the next formula
//what is the operator for the first number for the next formula

//how to adjust the abobe code to a handle multiple formulas?
//that is what to do with semicolon? that ends a formula



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
