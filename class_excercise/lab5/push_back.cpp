/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: title, e.g., Lab1A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <double> num(4);
    num.push_back(4);
    for( int i =0; i< num.size(); i++){
        cout << i << num[i] << endl;
    }
    
    return 0;
}
