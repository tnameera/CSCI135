/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task A

Task A
Write a program recursion.cpp, defining a function
void printRange(int left, int right);
that prints all numbers in 
range left ≤   x   ≤ right, separated by spaces. (Don’t use loops, global or static variables.)

//Task B
In the same program recursion.cpp, add a function

int sumRange(int left, int right);
that computes the sum of all numbers in range left ≤   x   ≤ right. (Don’t use loops, global or static variables.)
*/

//Task C


#include <iostream>
#include <string> 
#include <cctype>  


using namespace std;
void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
bool isAlphanumeric(string s);
bool nestedParens(string s);



//Task A
void printRange(int left, int right)
{
    // range is empty when left becomes bigger than right
    //base case is when we stop 
    //priting number within a range/loop
    if (left > right)//right value stopping point, base conditon
    {
        return;
    }
    cout << left << " ";
  
    // to make recurssion call and go 
    //to the next value, if n then (n+1)
    printRange (left + 1, right); //recursive call
}

//Task B
int sumRange(int left, int right){//summing number
    
    if (left > right)//base case, when you wanna stop
    {
        return 0;//sum has to return a number
    } 
    // cout <<  " left is " <<  left  << endl;;
    // cout << " right is "<< right << endl;
    // cout << " new " << endl;
    //compute next values with recursive call
    //actually have to return the  value here, since its an int funciton
    return left + sumRange(left + 1, right);
    
    
}

//Task C
int sumArray(int *arr, int size){
    //beginign of array is 0 and end of array is size-1
    //base case is when we added all elements in array from start to size
    if(size == 0){//base case
    return 0;
    }
    int index = size -1; // the starting value of the index, staring form the last element of array
    int element = arr[index];// element at the initial index 
    //int element = *(arr+index);
    return element + sumArray(arr, size -1);//recursice call

    
} 

//Task D
bool isAlphanumeric(string s)
{
    if (s.empty())//if sring is empty base case 
    {
        return true;
    }
    //check the first character && check that the rest of the string is alphanumeric. 
    return isalnum(s[0]) && isAlphanumeric(s.substr(1));//recursice call isalnum() 
    //isalnum() checks a character either letter or nummer
}

//Task E
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

int FindSum(int prices[],int n)
{
    if (n <= 0)
        return 0;
    return (FindSum(prices,n-1)+ prices[n-1]);
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



int main(){
    //Task A
    cout << "--------" << endl;
    printRange(-2, 10);
    cout << endl;
    // left = -2;
    // right = 10;
    // int x = printRange{left, right};
    // cout << x <<endl;
    // return 0;

    //Task B
    cout << "--------" << endl;
    int x = sumRange(1, 3);
    cout << "This is " << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << "That is " << y << endl;   // 52

    //Task C
    // cout << "--------" << endl;
    // int size = 3;
    // int *arr = new int[size];//allocate array dynamically
    // arr[0] = 1;//value of element in the arr[index]
    // arr[1] = 2;
    // arr[2] = 3;
    // int sum = sumArray(arr,size); //add all elements
    // cout << "Sum is " << sum << endl;
    // delete[] arr;//since you have already called a new arr
    
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it


    //Task D
    cout << "--------" << endl;
    cout << boolalpha;//print value of true or false
    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)


    //Task E
    cout << "--------" << endl;
    cout << boolalpha;//print value of true or false
    cout << nestedParens("((()))") << endl;      // true (1)
    cout << nestedParens("()") << endl;          // true (1)
    cout << nestedParens("") << endl;            // true (1)

    cout << nestedParens("(((") << endl;         // false (0)
    cout << nestedParens("(()") << endl;         // false (0)
    cout << nestedParens(")(") << endl;          // false (0)
    cout << nestedParens("a(b)c") << endl;       // false (0)
    cout << nestedParens("((") << endl;          // false(0)
    

    //Task F
    int prices1[] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
    int n = sizeof(prices1)/sizeof(prices1[0]);
    if (divisible(prices1, n) == true)
        cout<<"Can be divided into two subsets.\n";
    else
        cout<<"Cannot be divided into two subsets\n";
   

    int prices2[] = {12, 18, 19, 17, 13, 35, 33};
    int m = sizeof(prices2)/sizeof(prices2[0]);
    if (divisible(prices2, m) == true)
        cout<<"also Can be divided into two subsets.\n";
    else
        cout<<"also Cannot be divided into two subsets\n";
    return 0;
    }


