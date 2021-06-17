/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: lab7

A new program indent.cpp that enhances the program from the previous task. As it reads the input line by line, it should also count the number of open and closed { } in it,
and keep track of how many blocks is currently open at the beginning of each line.
*/

#include <iostream>
using namespace std;

// copy the program from Task A
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
int countChar(string line, char c){// source and input paramter
    int count = 0; // initial number of c in the line

    for (int i = 0; i < line.length(); i++){
        if (line[i] == c) {
            count++;
        }
    }
    //done checking the line 
    return count;
}

// helper function to print line with appropriate number of tabs
void printLine (string line, int indent){// print line with preceding number of tabs
    //print tabs
    for (int i = 0; i < indent; i++){// number of 2nd arguments (indent) here will be the number of tabs
        cout << '\t';
    }
    //print line
    cout << line <<endl;
}

int main(){
    string line;
    // the number of open block at the begining of each line
    int openblock = 0;
    // this will help to count the number of tabs to be printed for that line
    

    // reading line by line
    while (getline (cin, line)){
        //removes initial spaces in the line as per Task A
        line = removeLeadingSpaces(line);// reassign the valur in line

        // when line strats with '{' count the tab as 1 increasing manner
        //special case when line starts with '}'
        // need to peint wiht one less tab

        if (line[0] == '}') {
            //doesnt change the value of openblocks
            printLine(line,openblock-1);
        }
        else{
            //all the rest of the lines
            printLine(line, openblock);
        }

        // the indenation level is always the number of open cutly braces 
        //minus the number if closing curly braces that we have seen so far

        openblock += countChar(line, '{') - countChar(line,'}');
    }
    // end of program

    return 0 ;
}

