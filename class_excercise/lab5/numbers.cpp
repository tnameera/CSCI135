/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task A,B,C,D,E,F,G

Write a program numbers.cpp that defines a function

bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.

For example:
isDivisibleBy(100, 25) == true
isDivisibleBy(35, 17) == false
*/

#include <iostream>

using namespace std;


// Defining all the  variables.

bool isDivisibleBy(int n, int d); 
// task A

bool isPrime(int n);
// task B

int nextPrime(int n);
// task C

int countPrimes(int a, int b);
// task D

bool isTwinPrime(int n);
// task E

int nextTwinPrime(int n);
// task F

int largestTwinPrime(int a, int b);
// task G




// body of the funciton
// Task A
bool isDivisibleBy(int n, int d) {
    if (d == 0) { // if n divisible by 0 then it cant be defined
        return false;
    }
    if (n % d == 0) { // if n is divisible by d
        return true;
    }
    else // else not divisble return false
    {
        return false;
    }

}
// Task B
  bool isPrime(int n) {
    if (n < 2) { // if n divisible by 
        return false;
    }

    for (int i = 2; i < n-1 ; i++){
        if (n % i == 0) 
        {
            return false;
            //function ends as we have checked the loop for all the numbers
        }
        //function ends
    }
    return true;

}

// Task C 
// nextprime(17) ==19
int nextPrime(int n){ 

    int i = (n+1); // start at the integer > n, else if i = n then while loop will stop and never run
        
    while (!(isPrime(i))) //loops till we find the next prime
    {   
        
        i++; // If doesnt meet the condition go to  the new integer
    }

    return i;

}

//Task D
//Count primes in range

int countPrimes(int a, int b){
    int num_prime = 0;
    for (int i = a; i <=b ; i++){// loop within the range
        //cout << i<< endl;
        if (isPrime(i))// checking if prime
        {
            num_prime++;// update the num_prime value
        }
    }//loop ends
        return num_prime;
        
}


//Task E
// Determines whether or not its argument is a twin prime

bool isTwinPrime(int n){
    
        if (!isPrime(n)) {
            //cout  << "is twinprime " << n << endl;
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

//Task F

int nextTwinPrime(int n){
    int i = (n+1); // add one with the variiable to work with loop
    while(!isTwinPrime(i))// will run till we find the prime
    {
        i++;// till then add one to contiue the loop
    }
    return i;
}


//Task G
//that returns the largest twin prime in the range a ≤ N ≤ b.

int largestTwinPrime(int a, int b){
//that returns the largest twin prime in the range a ≤ N ≤ b.
    for (int i = b; i >=a ; i--){// the reverse to find the largest easily
        if(isTwinPrime(i))
        { // check if twin prime
            return i;
        }
    }// end of program, after checking from b to a

    return -1;// no twin prime was found


//If there is no twin primes in range, then return -1.

}


/*// calling the functions

int main(){

    cout << boolalpha;

    //Task A
    cout << isDivisibleBy(45, 3) << endl;
    cout << isDivisibleBy(11, 25) << endl;

    //Task B
    if (isPrime(11)==0)
    {
    cout << "Not Prime" << endl;
    }
    else 
    {
    cout << "Prime" << endl;
    }
    //cout << isPrime(17) << endl;
    //cout << isPrime(14) << endl;
    
    //Task C
    cout << nextPrime(17) << endl;

    //Task D
    cout << countPrimes(15,28) << endl;

    //Task E
    cout << boolalpha;
    cout << isTwinPrime(23) << endl;
    cout << isTwinPrime(15) << endl;
    cout << isTwinPrime(17) << endl;

    //Task F

    cout << nextTwinPrime(15) << endl;
    cout << nextTwinPrime(23) << endl;
    cout << nextTwinPrime(19) << endl;

    //Task G
  

}
  */