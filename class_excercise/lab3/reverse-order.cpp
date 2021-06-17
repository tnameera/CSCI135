/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment:TaskD, Lab3

A program reverse-order.cpp which asks the user to input two dates (earlier date then later date). The program should report the West basin elevation
for all days in the interval in the reverse chronological order (from the later date to the earlier)..
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
    //get input from user
    cout << "Enter earlier date: " ; // 05/29/2018
    string start;
    cin >> start ;

    cout << "Enter later date:" ; // 06/02/2018
    string end;
    cin >> end;

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

    //creating arrays
    string dates[400]; //since year has 365 days
    double elevations[400]; 
    int size = 0; // hold actual size of array

    // min  and max will be essentially be initiated to the first value read
    // but we dont know what this value will be
    //so good practice to use INT_MAX and INT_MIN
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
        //this loop reads line by line
        //extracting 5 values in each iteration

        //ignoring the remaining columns
        fin.ignore (INT_MAX, '\n');


        // Main Program
        if (date >= start &&  date <= end){
            //append value to array
            dates[size] = date;
            elevations[size]= westEl;
            size ++;
        }  
    
    }// end while
    fin.close();

    //for print in reverse order
    for(int i = size -1; i>= 0; i--){
        cout << dates[i] << " " << elevations[i] << " ft" << endl;
    }

}
