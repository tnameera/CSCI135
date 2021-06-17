/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task G

Add a function

int largestTwinPrime(int a, int b);
that returns the largest twin prime in the range a ≤ N ≤ b.
If there is no twin primes in range, then return -1.

For example:
largestTwinPrime(5, 18) == 17
largestTwinPrime(1, 31) == 31
largestTwinPrime(14, 16) == -1
Change the main function to test the new code..
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
int largestTwinPrime(int a, int b){
//that returns the largest twin prime in the range a ≤ N ≤ b.
    for (int i = b; i >=a ; i--){// the reverse to find the largest easily
        if(isTwinPrime(i)){ // check if twin prime
            return i;
        }
    }// end of program, after checking from b to a

    return -1;// no twin prime was found


//If there is no twin primes in range, then return -1.

}



int main(){

    cout << largestTwinPrime(11,17)<< endl;
    return 0;
}
