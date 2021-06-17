//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/inputRedirection.cpp

// illustrate the idead of redirecton inout stream
//not just read form console interactively
//creta ea plain text fiel calle dnames.txt with the followng contents.
//
#include <iostream>
using namespace std;

int main()
{
    string name;
    while (cin >> name)
        cout << name << endl;

    return 0;
}
//Ann Smith
//Bob John
//Charles Mit 
// the command used to conver the varibale in comman is :20, 18s/^/\/\//


// how to command to print the program: "ecs" then !g++% then !./a.out < names.txt



// name willl read just one line, One word at a time


string fullName;

while (getline(cin, fullName))
        cout << fullName << endl;
