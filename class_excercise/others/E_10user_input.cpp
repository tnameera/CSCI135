/*
Author: Syeda Nameera Tahseen
Course: CSCI-136
Instructor: Tong Yi
Assignment: E2.10

A program that asks the user to input
•The number of gallons of gas in the tank
•The fuel efficiency in miles per gallon
•The price of gas per gallon
Then prints the cost per 100 miles and how far the car can go with the gas in the tank.
*/

#include <iostream>

using namespace std;

int main(){

    //The number of gallons of gas in the tank
    cout << "Enter number of gallons of gas in the tank: " << endl;
    float existing_gallons;
    cin >> existing_gallons;

    //The fuel efficiency in miles per gallon
    cout << "Enter fuel efficiency in miles per gallon: " << endl;
    float fuel_efficiency;
    cin >> fuel_efficiency;

    //The price of gas per gallon
    cout << "Enter number of price of gas per gallon: " << endl;
    float price_per_gallon;
    cin >> price_per_gallon;


    float x = (price_per_gallon/fuel_efficiency)*100;
    cout << "The cost per 100 miles " << x << endl;

    float y = (existing_gallons*fuel_efficiency);
    cout << "How far the car can go with the gas in the tank " << y << endl;


    return 0;
}
