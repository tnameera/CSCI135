
//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/others/E4_8.CPP
/*
Author: Syeda Nameera Tahseen
Course: CSCI 135
Instructor: Tong Yi
Assignment: E4.8

A program that reads a word and prints each character of the word on 
a separate line. For example, if the user provides the input "Harry", the program prints
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
 
 cout << "Enter a string name: ";
 string st;
 cin >> st;

 for (int i = 0; i < st.length(); i++)
 {
       cout << st [i] << endl;
 }
    return 0;
}

