 //File name: /Users/syedrahman/Documents/CSCI135/class_excercise/others/1d_.cpp
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: title, eg. Lab 1A

briefly describe what program does
*/


// give a bunch of formulas , ended by
//calculate and  print the sum
// i might have after a number
//means the number is squared
// 3+5^ =6;
//-6^ -7 + 8;
//chalenging
// we get a; to process


// observation we need to consider ^?(after number)
// set pre-operator for the first number to be "+' save in ch;
// set the sum to 0;
// declare num as an int, which saves the values of the current incoming nb
// as long there is num // while ( cin >> num);
// begin
//   (0) see if there is ^ after the number because the formula setting, operator ^, 
//    if exists, must be right after number, no space in between 
//   can i reuse variable ch again? no bcoz ch is operator cant be ^
//    example 5^ means ch is '+' at this moment. so we cannot override
//    in step 1 ch is changed to ^. not good practice
//    read another symbol, read a char and put in a different variable
//    call it a ch2
//    if (ch2 == '^')
//    num *= num number needs to be sqared
//    else // there is no head operator following this current number
//    it can happen that we will have a 3+5^, 
//    so ch2 has '+' now
//    return the current char back to the input stream 
//    reason : I accidentally "swalloed the operator 
//    or spaces for the next number;
//    I need to put it back cin.purback(ch2)


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



// return the current char back to the inout stream cin. putback(ch2)
#include <iostream>
using namespace std;

int main()
{
   

    return 0;
}
