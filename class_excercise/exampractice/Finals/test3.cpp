#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

//Given the following code,

// const int SIZE = 5;
// int* data[SIZE];  for (int row = 0; row < SIZE; row++)  {     data[row] = new int[row+1];  }

// Write code to set each element in this 2-dimensional array data to be 100.




int main()
{
    const int SIZE = 5;
    int* data[SIZE];  
    for (int row = 0; row < SIZE; row++)  
    {       
        data[row] = new int[row+1]; 
    }

    int counter = 100;
    for(int i = 0; i < SIZE; i ++)
    {
        for (int j = 0; j <= i; j ++)
        {
            data[i][j] = counter;
            
        }
    }

     for(int i = 0; i < SIZE; i ++)
    {
        for (int j = 0; j <= i; j ++)
        {
           cout << data[i][j]<< " ";

        }
        cout << endl;
    }

    return 0;
}


