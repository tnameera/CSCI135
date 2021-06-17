/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task B

Make a program called optimism.cpp that implements the 
vector<int> goodVibes(const & vector<int> v); that, given a vector of integers, returns a vector with only the positive integers in the same order.
*/

#include <iostream>
#include <vector>

using namespace std;

//vector<int> goodVibes(const & vector<int> v);
vector<int> goodVibes(vector<int> v){

//vector<int> goodVibes(vector<int> &v){// & is the refernce parameter. this is a read only
    vector<int> positive;// new vector
    //loop throguth input vector v
    for (int i = 0;i < v.size(); i++){
        //add only positive values to result vector
        if (v[i]> 0){
            positive.push_back(v[i]);
        }
    }
    return positive;
}

int main(){

    //-std = c++11
    vector<int> v{1,2,-1,3,4,-1,46};
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
        if (i < v.size() - 1)
            cout << ","; 
    }
    //cout << v[v.size()-1];   
    cout << endl;
    
    vector<int> pos = goodVibes(v);//return {all positive}
    for(int i = 0; i < pos.size(); i++){
        cout << pos[i];
        if (i < pos.size()-1)
            cout << ",";
    }
    //cout << pos[pos.size()-1];   
    cout << endl;
    }
