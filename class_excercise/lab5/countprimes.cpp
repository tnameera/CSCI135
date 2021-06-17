/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task D
  
Add a function

int countPrimes(int a, int b);
that returns the number of prime numbers in the interval a ≤ x ≤ b. Change the main function to test the new code.
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
            cout << "n % i == 0" << endl;
            return false;  
        }
    }
    return true;
}
int countPrimes(int a, int b){
    int num_prime = 0;
    for (int i = a; i <=b ; i++){
        cout << i<< endl;
        if (isPrime(i)){
            num_prime++;
        }
    }
        return num_prime;
        
}
int main(){

    cout << countPrimes(15,28) << endl;
    
}
