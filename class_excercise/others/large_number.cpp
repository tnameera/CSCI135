/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: title, e.g., Lab1A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <math.h> 
#include <stdio.h> 

using namespace std;

int main(){
    //for loop;
    //int num;
    //cout << "enter a number :";
    //cin >> num;
    for(int i = 1; i <=10000; i*=10)
    {
        cout << i << endl;
    }


    cout << "-------------" <<endl;
    //while loop;
    int x = 1;
    while(x <= 10000){                                                       
        cout << x << endl;
        x = x * 10;
    }
        
cout << "-------"<< endl;

    double y = 6.1, z = 4.8; 
  
    // Storing the answer in result. 
    double result = pow(y, z); 
    cout << result << endl;
    //printf("%.2lf", result); 
  
    return 0; 
} 


