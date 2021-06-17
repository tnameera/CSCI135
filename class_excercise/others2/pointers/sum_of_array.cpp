#include <iostream>

using namespace std;
//int a[] = {11,26,36,5,2};

int main(){
    int a[] = {11,26,36,5,2};
    int sum = 0, *p;

    //for(p = &a[0]; p <= &a[4]; p++) //you can also write this or the statement below
    for(p = a; p <= a+4; p++)
        sum += *p;//after dereferencing u will get the value 11

        cout << "sum is " << sum << endl;

}