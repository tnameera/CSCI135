
//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/buy_stamps.cpp
#include <iostream>
using namespace std;

int main()
{
   
   cout << "Enter the amout of money: ";
   double money;
   cin >> money;

   cout <<"Enter the price of stamps: ";
   double price;
   cin >> price;

   int num_stamps = money/price;
   cout << "num of stamps " << num_stamps << endl;

    return 0
    ;
}
