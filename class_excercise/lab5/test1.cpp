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
    int a = 5 ;
    int b = 10;
    int sum = 0;
    
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
            sum += i;
    }
    cout << sum << endl;   

    return 0;
}
