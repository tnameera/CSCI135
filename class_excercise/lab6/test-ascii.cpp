/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task A

For historical reasons, type char is a numeric type, just like int. Each character in C++ is represented by its integer code, for example:

'A'	== 65
'B'	== 66
'C'	== 67
'D'	== 68
…	 
'Z'	== 90
…	 
'a'	== 97
*/

#include <iostream>

using namespace std;

int main(){
    string s;// string input
    getline(cin,s);// to read the whole string cin. Here cin sourse and s in location .
                  //we got getlien because if we did cin >> s it will stop after a white line
    
    for (int i =0; i < s.length(); i++){// to make sure the loop goes through each through each char in cin
        cout << s[i] << " " << (int) s[i]<< endl;// print output (int)c is ASC  

    }
    
}
