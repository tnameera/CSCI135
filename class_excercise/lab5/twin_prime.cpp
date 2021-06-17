/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task E

A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31 …

Add a function

bool isTwinPrime(int n);
that determines whether or not its argument is a twin prime. Change the main function to test the new code.
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


int main(){
    cout << boolalpha;
    cout << isTwinPrime(23) << endl;
    cout << isTwinPrime(15) << endl;
    cout << isTwinPrime(17) << endl;
    return 0;
}
