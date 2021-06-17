
#include <iostream>

using namespace std;

int main(){

     cout << " Enetr income: ";//(1) enter income from console
     double income;
     cin >> income;
     double tax;


    if (income > 0 &&  income <= 30000) //(2) Calculate tax.
    {
        tax = income *0.05;
    }

    else if (income <= 75000)
    {
        tax = income *0.10;
    }

    else if (income <= 150000){
        tax = income *0.15;
    }
    else 
    {
        tax = income *0.20;
    }
       
    cout << "tax is: " << tax << endl; //(3) print tax.
    return 0;
}
