/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskB, Lab3

Write a program minmax.cpp that finds the minimum and maximum storage in East basin in 2018.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

        string junk;        // new string variable
        getline(fin, junk); // read one line from the file 
        //After that, the file can be read line by line. The most idiomatic C++ way to read such well-formatted file until the end would be the following:

        string date;
        double eastSt, eastEl, westSt, westEl;
        
        //there varibale keep track of both min and max. initilize min/max to basic a largest/small possible nb 
        double max = INT_MIN;// large number close to infinity
        double min = INT_MAX;// small number  close to  -infinity
        
        // min  and max will be essentially be initiated to the first value read
        // but we dont know what this value will be
        //so good practice to use INT_MAX and INT_MIN
        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
            //this loop reads line by line
            //extracting 5 values in each iteration

            //ignoring the remaining columns
            fin.ignore (INT_MAX, '\n');
        
            //main program
            if  (eastSt < min) {
                min = eastSt;// found new min
                }

            if (eastSt > max){
                max = eastSt; // found new max
            }
        }   //end of file    
            fin.close();

            //print new min and max value
            cout << "Minimum storage in East basin:" << min << "billion gallons" << endl;//59.88 billion gallons
            cout << "MAXimum storage in East basin:" << max << "billion gallonsendl" << endl;//81.07 billion gallons

    }
