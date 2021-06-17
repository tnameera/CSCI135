/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskD, Lab1A

Write a program fibonacci.cpp, which uses an array
of ints to compute and print all Fibonacci numbers from F(0) to F(59)
*/

#include <iostream>

using namespace std;

int main(){
    // make an array   
    int fib[60];

    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;

    // and all the following ones can be computed iteratively as
    for (int i = 2 ;i < 60 ; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    //print number
    for (int i = 0 ;i < 60 ; i++){
        cout << fib[i] << endl;}

    return 0;
}
