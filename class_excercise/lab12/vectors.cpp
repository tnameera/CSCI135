/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskA

For this task, program a function called vector<int> makeVector(int n) that returns a vector of n integers that range from 0 to n-1. 
Call your program vectors.cpp. Your function must be implemented outside the main function and must return a vector.
//create new vector
//for loop goes upto n-1
//push_vectro
//call new vector
*/

#include <iostream>
#include <vector>

using namespace std;
vector<int> makeVector(int n){// vector initialized to size n. elements inside this should be from 0 to n-1
    vector <int>newVector;
    //i range form 0 to n-1
    for(int i = 0; i < n; i++)
        newVector.push_back(i);// create new vector to push the values from function
        //cout << newVector;

        //return result
        return newVector;
}


int main(){
    int n = 4;//return 0,1,2,3
    vector<int>test = makeVector(n);
    //print each element of the vector
    for (int i = 0; i < test.size(); i ++){
        cout << test[i] << " ";
     
    }
    //end of vector
    cout <<endl;
}
