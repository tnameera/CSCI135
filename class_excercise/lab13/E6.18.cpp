/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.18

vector<int> append(vector<int> a, vector<int> b)
that appends one vector after another. For example, if a is

1 4 9 16
and b is
9 7 4 9 11
then append returns the vector
1 4 9 16 9 7 4 9 11
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> append(vector<int> a, vector<int> b){
    // vector<int> values;
    // for (int i = 0; i < a.size();i++)
    // {
    //     values.push_back(a[i]);  
    //     //cout << values[i] << endl;
    // }
    
    for ( int j = 0; j < b.size(); j++)
    {
        a.push_back(b[j]);
        //cout << values[j] << endl;
    }
    return a;
    }

vector<int> append2(vector<int>* a, vector<int> b){
    // vector<int> values;
    // for (int i = 0; i < a.size();i++)
    // {
    //     values.push_back(a[i]);  
    //     //cout << values[i] << endl;
    // }
    
    for ( int j = 0; j < b.size(); j++)
    {
        a.push_back(b[j]);
        //cout << values[j] << endl;
    }
    }


int main(){

    vector<int> a{1,4,9,16}; 
    vector<int> b{9,7, 4, 9, 11};
    //vector<int> result = append(a,b);//calling function
    //for(int i = 0; i < result.size(); i++)
    //    cout << result[i] << " ";

    append2(&a,b);
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;

}
