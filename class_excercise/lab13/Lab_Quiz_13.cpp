/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 13

Lab Quiz 13 - Vectors Begins with an introductory 
comment Contains a function vector<int> makeVector
(int n) taking an integer as a parameter, and 
returns a vector of n integers that range from 0
to n - 1. Nonpositive input returns an empty vector.
*/

#include <iostream>
#include <vector>

using namespace std;


vector<int> makeVector(int n){
    vector <int> a;
    for ( int i = 0; i < n; i++)
    {
        a.push_back(i);
        //cout << values[i] << endl;
    }
    return a;

}

int main(){

    int n = 9;
    vector<int>result = makeVector(n);
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}
