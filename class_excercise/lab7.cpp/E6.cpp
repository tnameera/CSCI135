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

bool equals(vector<int> vectA, vector<int> vectB);// declaration of funciton


int main(){

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);

    vector<int> v2;
    v2.push_back(1);

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);

    vector<int> v4;
    v4.push_back(1);
    v4.push_back(3);
    

    //boolalpha means to print the value of bool variable
    //as true or false, otherwise, true would be displayed as 1,
    //while false would be displayed as 0.
    cout << "v1 == v2? " << boolalpha << equals(v1, v2) << endl;
    cout << "v1 == v3? " << boolalpha << equals(v1, v3) << endl;
    cout << "v3 == v4? " << boolalpha << equals(v3, v4) << endl;

    return 0;
}

bool equals(vector<int> vectA, vector<int> vectB)
{
    int sizeA = vectA.size();
    int sizeB = vectB.size();

    if (sizeA != sizeB)
    { 
        return false;
    }
    else 
    {
        //Now  if sizeA must equal to sizeB, otherwise,
        //we would compare each and every index of the 2 vector
        //if not we will not preceed further
        
        for (int i = 0; i < sizeA; i++)
        {
            if (vectA[i] != vectB[i])
            return false;
            //else return true; //WRONG
        }

        return true;
    }
}

