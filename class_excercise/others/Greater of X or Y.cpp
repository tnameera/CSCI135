/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 02 

Enter two integers from console, find out the bigger of these two integers.
Sample input/output:

Enter the first number: 7 
Enter the second number: 3
The larger of the two is 7
*/

#include <iostream>

using namespace std;

int main(){

    int first_num, second_num;
    cout << "Enter the first number: ";
    cin >> first_num;
    cout << "Enter the second number: ";
    cin >> second_num;

    if (first_num > second_num){
        cout << "The larger of the two is " << first_num << endl;
    } 
        
    else {
        cout << "The larger of the two is " << second_num << endl;
    }


    return 0;
}
