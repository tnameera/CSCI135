/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskC

Make a program called fusion.cpp that implements the function void gogeta(vector<int> &goku, 
vector<int> &vegeta) that appends elements of the second vector into the first and empties the second vector.
*/

#include <iostream>
#include <vector>

using namespace std;
void gogeta(vector<int> &goku, vector<int> &vegeta){
    //move elements from v2to v1
    //hiher to lower
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);//push v2 to v1
    }
    vegeta.clear(); //clear v2 smaller
}

int main(){

    // vector<int> v1{1,2,3};
    // vector<int>v2{4,5};

    // gogeta (v1,v2);// we updated v1 and v2 is empty

    // for(int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
}
