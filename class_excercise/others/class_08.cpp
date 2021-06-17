

#include <iostream>
# include<iomanip> 
using namespace std;

int main(){

    cout << " Enter the amout of money: ";// money can contain decimal numbers.so it is double type
    double money;
    cin >> money;

    cout << "price of stamp: ";// money can contain decimal numbers.so it is double type
    double price;
    cin >> price;

    int moneyIncents = money *100;
    int priceIncents = price *100;

    int numStamp = moneyIncents / priceIncents;

    int remainMoney = moneyIncents % priceIncents; // the raminign money
    cout << " Enter the amout of stamps: " << numStamp;
    cout << "remaining money"
    //<< remainingMoney  * 1.0 / 100; or
    //<< (double)remainingmOney /100
    // remainign money / 100 doesnt not work
    //remainingMoney is an int;
    //so remainignMoney / 100 is integer division;
    //suppose the value of remainingMoney is 99;
    //the dividing by 100 is like
    //to divide 99 cents among 100 students.
    //no student get 1 cent
    // thtat the quotient of 99 divided by 100 is zero.
    // if you dont want use integer division
    // then you can make either the divisor or 
    // the dividend t be non-int

    int valie = 3.45 *10 + 0.5;
    //3.45 *10 returms 34.5
    // then whe we squeeze 34.5 into an int value,
    // the decimal part will be truncated
    // so if you want to use round --34.5 is round to 35
    //while 34.4 is rounded to 34,
   

    return 0;
}
