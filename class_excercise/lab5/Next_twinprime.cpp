/*
Author: Syeda Nameera Tahseen 
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task F
Add a function

int nextTwinPrime(int n);
that returns the smallest twin prime greater than n. Change the main function to test the new code.
*/

#include <iostream>

using namespace std;

bool isPrime(int n) { //that returns the number of prime numbers in the interval a ≤ x ≤ b. 
    //cout << "n = " << n << endl;
    //return true;
    
    if (n < 2) { // if n divisible by 
        cout << n << "n<2" << endl;
        return true;
    }
    for (int i = 2; i < n-1 ; i++){
        cout << "i " << i << "  n % i " << n % i << endl;
        if (n % i == 0) {
            cout << i << "n % i == 0" << endl;
            return false;  
        }
    }
    return true;


}
bool isTwinPrime(int n){
    
        if (!isPrime(n)) {
            cout  << "is twinprime " << n << endl;
            return false;// if n is not prime the other condition will not meet

        } 
        // if n is prime then check the following condition
        if (isPrime(n+2) || isPrime(n-2)){
            return true; // twin prime
        }
        else
        {
            return false; // not a twin prime
        }  
    }


int nextTwinPrime(int n){
    int i = (n+1);
    while(!isTwinPrime(i))
    {
        i++;
    }
    return i;
}


int main(){

    cout << nextTwinPrime(323) << endl;
    //cout << nextTwinPrime(23) << endl;
    //cout << nextTwinPrime(19) << endl;
    return 0;
}
