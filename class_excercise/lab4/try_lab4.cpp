#include <iostream>

using namespace std;

int main(){

    int  size;
    cout << "Enter size: ";
    cin >> size;
   
    for ( int i = 0 ; i< size ; i++)
    {
        for (int j =0; j< size ; j++)
        {

        // j%2 ==0 j even; i%2 == 0 i even
        // j%2 !0 j even; i%2 != 0 i odd
        // check if j and i are odd or even
        //j is col index (width) and j is row index(height)

        if (i == j || i + j == size -1)
        {    
            cout << "*";
        }

        else //(int row % 2 != 0)7

        {    
            cout << " ";
        }

        }// close the inside loop

        cout << "\n";

    } // close the outside loop
        
    return 0;
}