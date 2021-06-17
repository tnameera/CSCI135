#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int multiply(int arr[], int size)
{    
    int product = 1;   

    for (int i = 0; i < size; i++)
    {
        if (i % 3 == 0)
            product = product * arr[i];
    }   
    return product;
}

int main()
{

int arr[] = {1,2,3,4,5,6,7};
int len = sizeof(arr)/sizeof(arr[0]);
cout << multiply(arr,len) << endl;
return 0;
}


