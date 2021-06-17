/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.20

Write a function
vector<int> merge_sorted(vector<int> a, vector<int> b)
that merges two sorted vectors, producing a new sorted vector. Keep an index into each vector, indicating how much of it has been processed already. Each time,
append the smallest unprocessed element from either vector, then advance the index. For example, if a is
1 4 9 16
and b is
4 7 9 9 11
then merge_sorted returns the vector
1 4 4 7 9 9 9 11 16
*/

#include <iostream>
#include <vector>

using namespace std;
vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector<int>res;
    int i = 0;
    int j = 0;
    while(i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            res.push_back(a[i]); 
            i++;  
        } 
        else
        {
            res.push_back(b[j]);
            j++;
        }


    }

    while(i < a.size())
    {
        res.push_back(a[i]); 
        i++;  
    }

    while(j < b.size())
    {
        res.push_back(b[j]);
        j++;
    }

    return res;

}

int main(){
    vector<int> a{1, 4, 9, 16}; 
    vector<int> b{4, 7, 9, 9, 11};
    vector<int> fiz = merge_sorted(a, b);
    for(int k = 0; k < fiz.size(); k++)
        cout << fiz[k] << " ";
    cout << endl;
    return 0;
}
