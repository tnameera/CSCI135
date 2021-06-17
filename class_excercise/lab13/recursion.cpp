/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: Task F

Alice and Bob inherited a collection of paintings. However, they will receive it only if the collection can be divided into two parts of exactly equal price. (Otherwise, 
it will be donated to a local art museum.)
*/

#include <iostream>
#include <string> 
#include <cctype> 

using namespace std;


bool divisible(int *prices, int size);
// {
//     if (size.empty())//if sring is empty base case 
//     {
//         return true;
//     }
//      if (size%2 == 0)//if sring is empty base case 
//     {
//         return true;
//     }
//     //check the first character && check that the rest of the string is alphanumeric. 
//     return isalnum(s[0]) && isAlphanumeric(s.substr(1));//recursice call isalnum() 
//     //isalnum() checks a character either letter or nummer


//Task F
    //Helper function
bool isSubsetSum (int prices[], int size, int sum)
{
    if (sum == 0)
    return true;
    if (size == 0 && sum != 0)
    return false;

    // If last element is greater than sum, then
    // ignore it
    if (prices[size-1] > sum)
    return isSubsetSum (prices, size-1, sum);

    /* else, check if sum can be obtained by any of
    the following
    (a) including the last element
    (b) excluding the last element
    */
    return isSubsetSum (prices, size-1, sum) ||
    isSubsetSum (prices, size-1, sum-prices[size-1]);
    }

int FindSum(int arr[],int n)
{
    if (n <= 0)
        return 0;
    return (FindSum(arr,n-1)+ arr[n-1]);
}

bool divisible (int prices[], int size)
    {
    //Calculate sum of the elements in array
    int sum = FindSum(prices,size);
    // If sum is odd, there cannot be two subsets
    // with equal sum
    if ((sum)%2 != 0)
        return false;

    // Find if there is subset with sum equal to
    // half of total sum
    return isSubsetSum (prices, size, (sum)/2);
    }

    // Driver program to test above function

int main(){

    int prices1[] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
    int n = sizeof(prices1)/sizeof(prices1[0]);
    if (divisible(prices1, n) == true)
        cout<<"Can be divided into two subsets.\n";
    else
        cout<<"Cannot be divided into two subsets\n";
   

    int prices2[] = {5, 4, 3, 2, 1};
    int m = sizeof(prices2)/sizeof(prices2[0]);
    if (divisible(prices2, m) == true)
        cout<<"also Can be divided into two subsets.\n";
    else
        cout<<"also Cannot be divided into two subsets\n";
    return 0;
}
   

