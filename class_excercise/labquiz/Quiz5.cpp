/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 05

Lab Quiz 05 - Rectangle: Outputs a 
star grid to the console using ‘cout <<’, each line looks "* * * * *" (without double quotes)
*/

#include <iostream>

using namespace std;

int main(){
    int tall = 6;
    int wide = 9;
    //use int i and j as nested loop 
    for (int i = 0; i <tall; i++)
    {
        for (int j = 0; j < wide; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}