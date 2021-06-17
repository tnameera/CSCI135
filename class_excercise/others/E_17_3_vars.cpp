/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment:E1.7

A program that prints three items, such as
the names of your three best friends or favorite movies, on three separate lines
*/

#include <iostream>

using namespace std;

int main(){


    string friend1,friend2,friend3;

    cout << "Enter names of friend 1: ";
    cin >> friend1;
    

    cout << "Enter names of friend 2: ";
    cin >> friend2;
   

    cout << "Enter names of friend 3: ";
    cin >> friend3;

    cout << friend1 << endl;
    cout << friend2 << endl;
    cout << friend3 << endl;

    return 0;
}
