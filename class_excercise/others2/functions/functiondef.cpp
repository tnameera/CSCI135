

#include <iostream>

using namespace std;//function definition: 

int sub(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}



//program 2:
//calling a function:
//function definition
int add(int, int);//no need to mentionthe name of parameteres


//calling function
int main()
{
    int m = 30; int n = 30; int sum; // calling the function
    //while calling not mention the return type and data types of arguments
    //only the names of the arguments

    sum = add(m , n);//just the name of the function and variables not the actualy value
    cout << "value is: " << sum << endl ;
    return 0;

}
//in definition
//data type
//names of the parameters
int add(int a, int b)//declaring the function
{
    int res = a+b;
    return res;
}


//arguments and parameter

//parameter: is the varibale in the declaration and definition
//arguments : is the actual value pf the parameter and arguments also

//varibales in main/ calling function is actual parameters or arguments
//variables in the function declaration is the formal parameters


