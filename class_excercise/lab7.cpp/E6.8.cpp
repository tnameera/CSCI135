/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.8

A function bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order.
*/

#include <iostream>
#include <vector>

using namespace std;

bool equals(int a[], int a_size, int b[], int b_size);// declaration of funciton


int main(){

    int v1[2] = {1,2};
    int v2[1] = {1};
    int v3[2] = {1,2};
    int v4[2] = { 1,3};
    

    //boolalpha means to print the value of bool variable
    //as true or false, otherwise, true would be displayed as 1,
    //while false would be displayed as 0.
    cout << "v1 == v2? " << boolalpha << equals(v1, 2, v2 ,1) << endl;
    cout << "v1 == v3? " << boolalpha << equals(v1, 2, v3, 2) << endl;
    cout << "v3 == v4? " << boolalpha << equals(v3,2,  v4,2) << endl;
    

    return 0;
}

bool equals(int a[], int a_size, int b[], int b_size)
{

    if (a_size!= b_size)
    { 
        return false;
    }
    else 
    {
        //Now  if sizeA must equal to sizeB, otherwise,
        //we would compare each and every index of the 2 vector
        //if not we will not preceed further
        
        for (int i = 0; i < a_size; i++)
        {
            if (a[i] != b[i])
            return false;
            //else return true; //WRONG
        }

        return true;
    }
}

