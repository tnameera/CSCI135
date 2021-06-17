/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 07

Lab Quiz 07: define the function 
`void remove_e(string & sentence)` Removes all `e` characters from the original string
*/

#include <iostream>
using namespace std;

void remove_e(string & sentence)
{
    string name = "";
    // to remove from a given sentense
    for (int i = 0; i < sentence.length(); i++ )
    {
        if (sentence[i] != 'e')
        {
            name += sentence[i];
        }
    }

    sentence = name;
}


int main(){

    string nameera = "nameera";
    remove_e(nameera);
    cout << nameera << endl;
    return 0;
}
