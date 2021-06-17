/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz ()

Brackets define int unbalanced_brackets(string input), return difference of unbalanced open and closed brackets. 
Ex: input “{{}” returns 1, “{}}}}” returns -3, “}{}{{{“ returns 2
*/

#include <iostream>

using namespace std;

int unbalanced_brackets(string input){

    int open = 0;
    int close = 0;

    for (int i = 0; i <input.length();i++)
    {
        if (input[i] == '{')
        {
            open += 1;
        }
        else
        {
            close += 1;
        }
        
    }   

    int result = open - close;
    return(result);
}


int main(){

    
    string input = "}{}{{{";
    cout << unbalanced_brackets(input) << endl;
    return 0;
}
