/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskC, Lab3

A program compare.cpp that asks the user to input two dates (the beginning and the end of the interval). The program should check each day in the interval and report which basin had higher 
elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){

     cout << "Enter starting date: " ; // 09/13/2018
     string start;
     cin >> start;

     cout << "Enter ending date: "; // 09/17/2018
     string end;
     cin >> end;

     ifstream fin("Current_Reservoir_Levels.tsv");
     if (fin.fail()) {
          cerr << "File cannot be opened for reading." << endl;
          exit(1); // exit if failed to open the file
     }
     string junk;        // new string variable
     getline(fin, junk); // read one line from the file 
     //After that, the file can be read line by line. 

     string date;
     double eastSt, eastEl, westSt, westEl;
        
     // min  and max will be essentially be initiated to the first value read
     // but we dont know what this value will be
     //so good practice to use INT_MAX and INT_MIN
     while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
          //this loop reads line by line
          //extracting 5 values in each iteration

          //ignoring the remaining columns
          fin.ignore (INT_MAX, '\n');

          //main program checking if its within range
          if (date >= start &&  date <= end){
               cout << date << " ";

               //checking which elevaiton is higer 
               if (eastEl > westEl) {
                    cout << "East" << endl; 
               } else if (eastEl < westEl) {
                    cout << "West" <<endl; 
               } else if (eastEl == westEl) {
                    cout << "Equal" << endl; 
               }
               }
    } // done reading file
     fin.close();
}
