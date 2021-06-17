#include <iostream>

using namespace std;


int main(){

    int a[]= {1,2,3,4,5}
    int *p = &a[2]; //initial value which is 3 here 1008
    cout << *(--p) << endl;//at first 1004 then 2
    cout << *(p--) << endl;//at first 1004 then 2

    return 0;
}

//output (2,2)