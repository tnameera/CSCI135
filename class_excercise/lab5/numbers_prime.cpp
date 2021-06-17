/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task B

Write a program numbers.cpp that defines a function

bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.

For example:
isDivisibleBy(100, 25) == true
isDivisibleBy(35, 17) == false
*/

#include <iostream>

using namespace std;

  bool isPrime(int n) {
    //cout << "n = " << n << endl;
    //return true;
    if (n < 2) { // if n divisible by 
        cout << "n<2" << endl;
        return true;
    }
    for (int i = 2; i < n-1 ; i++){
        cout << "i " << i << "  n % i " << n % i << endl;
        if (n % i == 0) {
            cout << "n % i == 0" << endl;
            return false;  
        }
    }
    return true;
    
  }
int main(){

    cout << boolalpha;
    cout << isPrime(17) << endl;
    cout << isPrime(9) << endl;
    
    // Other way of calling a function
    if (isPrime(11)==0)
    {
    cout << "Not Prime" << endl;
    }
    else 
    {
    cout << "Prime" << endl;
    }
    //cout << "yes" << endl;
    //cout << "no " << endl;
}
