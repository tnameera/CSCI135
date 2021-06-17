/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.14

Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is greater than b 
and otherwise leaves a and b unchanged. For example,

int u = 2;
int v = 3;
int w = 4;
int x = 1;
sort2(u, v); // u is still 2, v is still 3
sort2(w, x); // w is now 1, x is now 4
*/

#include <iostream>

using namespace std;

void swap(int a, int b);
void actual_swap(int& a, int& b);

void sort2(int& i, int& j){
    cout << "Entering sort function " << i  << " "  << j <<  endl;
    if( i > j){
        actual_swap(i,j);
    }
}

void actual_swap(int& a, int& b){
    cout << "Entering actual swap function " << a  << " "  << b <<  endl;
    int temp = a;
    cout << "temp " << temp << endl;
    a = b;
    cout << "a " << a << endl;
    b = temp;
    cout << "b " << b << endl;
}

void swap(int a, int b){
    cout << "Entering actual swap function " << a  << " "  << b <<  endl;
    int temp = a;
    cout << "temp " << temp << endl;
    a = b;
    cout << "a " << a << endl;
    b = temp;
    cout << "b " << b << endl;
}

int main(){

    int i = 4;

    int j = 3;

    actual_swap(i,j);

    cout << "i is " << i << endl; //a is 2
    cout << "j is " << j << endl; //b is 3

    return 0;
}
