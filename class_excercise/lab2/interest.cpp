/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: title, e.g., Lab1A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>

using namespace std;

int main(){

    int num, sum;
    float intrate;
    num = 10000;
    intrate =.05;

    while (num < 20000){
        num = (num *intrate + num);
        cout << num << endl;
    
    }
    return 0;
}
