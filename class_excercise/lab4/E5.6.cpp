/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.6

write a funciton of string middle (string stf) that returns a string containing the middle character 
in the str if the length of str is odd, or the two middle character if the length is even.
*/

#include <iostream>

using namespace std;

// Function that prints the middle
// character of a string
string middle(string str)
{
    // Finding string length
    int len = str.size();
    //cout << len << endl;
 
    // Finding middle index of string
    int middle = len / 2;
    //cout << middle << endl;

    //check if the length is even 
    if (len % 2 == 0){
        return str.substr(middle-1,2);

    }
    // else lenght will be odd
    else
    {
       return str.substr(middle,1);
    }

    return " ";
}

/// Driver Code
int main()
{
    // Given string str
    string str = "HunterCollege";
    

    // Function Call
    cout << middle(str) << endl;
    return 0;
}


