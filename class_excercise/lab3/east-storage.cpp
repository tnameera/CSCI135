/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskA, Lab3

A program east-storage.cpp that asks the user to input a string representing the date
(in MM/DD/YYYY format), and prints out the East basin storage on that day.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){

    cout << "Enter date: "; // 05/20/2018
    string user_Date;
    cin >> user_Date;

    //cout << "East basin storage: "; //80.96 billion gallons

    // given info about file
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    
    // remove column headers
    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    
    //declaring variables
    string date;
    double eastSt, eastEl, westSt, westEl;

    //given while loop. fin means reading from files
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        //ignorring the remaining columns
        fin.ignore(INT_MAX, '\n'); 

        //process current row to print the date and East basin storage:
        if (date == user_Date){
            cout << "East basin storage: " << " " << eastSt <<  "billion gallon" << endl;
        }
        
   }// done reading
    fin.close();

  
}
