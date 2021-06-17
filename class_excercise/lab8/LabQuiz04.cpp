/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 04

open and read a file called "data.txt", which contains lines of text with names of colors and their RGB values like this:
red FF0000 etc. Read and print each line. Close the file after processing it.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()

{   //ifstream fin("grades.txt");        
    ifstream fin;
    fin.open("data.txt");

    string color;
   
    while (fin >> color)
    {
        // cout << color << " " << RGB;
        cout << color << endl;
            
    }

    fin.close();
    return 0;
}
