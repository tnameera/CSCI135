/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Lab7

A program unindent.cpp that reads input from cin and prints out each input line with leading spaces removed..
*/

#include <iostream>
#include <cctype>

using namespace std;

string removeLeadingSpaces(string line){
// get the index for the first non space character
int i =0;

    //the loop end when line[i] meets a non space character
    // line = "    Hello"
    while(isspace(line[i]))
    {
        i++;
    }
    // return the line starting at the first non-space character
    // when we address [i] with substr it will print the first character till the end of the line
    return line. substr(i); 

    }

int main(){
    string line;
    while (getline (cin, line))
    {
        cout << removeLeadingSpaces(line) << endl;
    }

}
