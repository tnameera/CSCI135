/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E8.1

Write a program that carries out the following tasks:

Open a file with the name hello.txt.
Store the message “Hello, World!” in the file.
Close the file.
Open the same file again.
Read the message into a string variable and print it.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //create the reference variable
    string str;

    // create file 
    //fstream file
    ofstream file;

    //file open
    file.open("hello.txt");

    //store in the line
    //file << "Hello World!" << endl; //no new line, add ,
    file << "Hello, World!";
    
    // close the file
    file.close();

    ifstream file2;
    //open the file again
    file2.open("hello.txt");

    //Read the content
    getline(file2, str);

    //Display the content on console
    cout << str << endl;

    //close the file
    file2.close();
    return 0;
}
