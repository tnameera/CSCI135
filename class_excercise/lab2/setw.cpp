#include <iostream>
#include <iomanip> //setw
using namespace std;

int main()
{
    int dividend[] = {7, 7, -7, -7};
    int divisor[] = {3, -3, 3, -3};
    //int size = sizeof(dividend) / sizeof(dividend[0]);
    int size = sizeof(dividend) / sizeof(int);
    


    int quotient;
    int remainder;

    for (int i = 0; i < size; i++)
    {
        quotient = dividend[i] / divisor[i];
        remainder = dividend[i] % divisor[i];

        cout << setw(2) << dividend[i] << " / " 
             << setw(2) << divisor[i] << " quotient: " 
             << setw(2) << quotient ;
        cout << ", remainder: " << setw(2) << remainder << ", "; 
        bool value = 
            (dividend[i] == divisor[i] * quotient + remainder);
        cout << dividend[i] << " == "
             << divisor[i] << " * " << quotient
             << " + " << remainder << " is "
             << boolalpha << value  << endl;
             //boolalpha displays a bool variable,
             //value in this example,
             //in true or false instead of 1 or 0. 
    }
    return 0;
}