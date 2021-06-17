/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.15

Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to arrange them in sorted order. For example,

int v = 3;
int w = 4;
int x = 1;
sort3(v, w, x); // v is now 1, w is now 3, x is now 4
*/

#include <iostream>

using namespace std;
void sort3(int& a, int& b, int& c)

{
    if( a > c)
    {
    int temp = a;
    a = c;
    c = temp;
    }

    if( a > b)
    {
    int temp = a;
    a = b;
    b = temp;
    }

    if( b > c)
    {
    int temp = b;
    b = c;
    c = temp;
    }

}

int main(){

    int a = 4;
    int b = 3;
    int c = 2;

    sort3(a,b,c);

    cout << "a is " << a << endl; //a is 2
    cout << "b is " << b << endl; //b is 3
    cout << "c is " << c << endl; //b is 3  
    return 0;

}

