#include <iostream>

using namespace std;


int main()

{   // an array with 5 rows and 2 columns.
    //int a[5][3] = { {0,0,0}, {1,2,0}, {2,4,0}, {3,6,0},{4,8,0}};
    int a[5][3] = { 0,0,0, 1,2,0, 2,4,0, 3,6,0,4,8,0};
    // output each array element's value  
    for (int i = 0; i < 5 ;i++){
        for (int j = 0; j < 3 ;j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j];
            cout << " "; 
        }
        cout << endl;
        
    }
    return 0;
}


//one dimensional

    // for (int i = 0; i < 5 ;i++)
    // {
    //     cout << a[i]; 
    // }

//two dimensional