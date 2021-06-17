#include <iostream>

using namespace std;


int main()
{
    int arr[9] = {32, 25, 46, 14, 2, 5, 3, 8, 6};
    for(int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";

    } 
    cout << endl;

    //for reverse order
    
    for(int i = 8; i >= 0; i--)
    {
        cout << arr[i] << " ";
        
    } 
    cout << endl;
    return 0;
}



