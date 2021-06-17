/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task C

Add a function

int nextPrime(int n);
that returns the smallest prime greater than n.

For example:
nextPrime(14) == 17
nextPrime(17) == 19
Change the main function to test the new code.
*/

#include <iostream>

using namespace std;

// returns the prime that comes after n
int nextPrime(int n){ 

    int i = (n+1); // start at the integer > n, else if i = n then while loop will stop and never run
        
    while (!(isPrime(i))) //loops till we find the next prime
    {   
        
        i++; // If doesnt meet the condition go to  the new integer
    }

    return i;

}

int main(){

    cout << boolalpha;
    cout << nextPrime(14) << endl;
    //cout << isDivisibleBy(11, 25) << endl;
    //cout << "no " << endl;
}
