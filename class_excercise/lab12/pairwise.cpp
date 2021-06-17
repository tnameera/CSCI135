/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task D

Write a program called pairwise.cpp that implements the function vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) that returns a vector of integers whose elements are the pairwise sum of the elements
from the two vectors passed as arguments. If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0.
*/

#include <iostream>
#include <vector>

using namespace std;

//v1 = {1,1}
//v2 = {2,2}
//sum = {3,3,2}

vector<int> sumPairWise(vector<int> &v1,vector<int> &v2){
    vector<int>sum;
    if(v1.size() > v2.size()){
        sum = v1;//sum is initilized to bigger vector
        //add elements of smaller vectro to sum
        //which is vector being returened
        for(int i = 0; i < v2.size(); i++){
            sum[i] += v2[i];
        }
    }
    else {
        sum = v2;
        for(int i = 0; i < v1.size(); i++){
            sum[i] += v1[i];
        }
    }
    return sum;
}

void printVec(vector<int> result){
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;
}
    
int main(){

    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    vector<int> result = sumPairWise(v1, v2); // returns [5, 7, 3]
    printVec(result);
    return 0;

}

