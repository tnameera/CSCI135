/*
Author: Syeda Nameera Tahseen
Course: CSCI-136
Instructor: Melissa Lynch
Assignment: TaskB, Lab1A

A program smaller3.cpp that asks the user to input three integer numbers, 
and prints out the smallest of the three.
*/

#include <iostream>

using namespace std;

int main(){
cout << "Enter the first_number: " ;// 23
int first_number;
cin >> first_number;

cout << "Enter the second_number: ";// 76
int second_number;
cin >> second_number;

cout << "Enter the third_number: ";// 37
int third_number;
cin >> third_number;

if(first_number < second_number && first_number < third_number){
    cout << "The smaller of the three is " << first_number << endl;
}
else if(second_number < first_number && second_number < third_number){
    cout << "The smaller of the three is " << second_number << endl;
}
else {//third_number < first_number && third_number < second_number
    cout << "The smaller of the three is " << third_number << endl;
}
    return 0;
}
