/*
Author: Syeda Nameera Tahseen
Course: CSCI-136
Instructor: Melissa Lynch
Assignment: TaskA, Lab1A

A program smaller.cpp that asks the user to input two integer numbers and prints 
out the smaller of the two.
*/
#include <iostream>

using namespace std;

int main(){


cout << "Enter the first_number: "; //15
int first_number;
cin >> first_number;

cout << "Enter the second_number: "; //-24
int second_number;
cin >> second_number;

//see which is smaller
//use a condition: if-statement

if (first_number < second_number){
    cout << "The smaller of the two is " << first_number << endl;  
}else{
    cout << "The smaller of the two is " << second_number << endl;  
}

    return 0;
}


//another approach
//int smallest;
//if (first_number < second_number){
    //smallest == first_number;  
//}else{
    //smallest == second_number;  
//}
//cout << "The smaller of the two is " << smallest << endl;