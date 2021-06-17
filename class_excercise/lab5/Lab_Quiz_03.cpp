/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: lab Quiz 03

Initialize an array of numbers 1-10 uses 'cout >>' to print each number on a separate line
*/

#include <iostream>

using namespace std;

int main(){
     int numbers[10];
     for( int i= 0; i < 10; i++){
        numbers[i] = i+1;
        cout << numbers[i] << endl;
    }
    return 0;
}
