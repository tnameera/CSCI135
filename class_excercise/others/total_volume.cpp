
//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/total_volume.cpp
#include <iostream>
using namespace std;

int main()
{
   
   // int num_bottle =2; //declaration ans initilization
   //in one line

   int num_bottles;
   num_bottles = 3;

   const int volume_per_bottles = 2; //each bottle has 2 liters
   double volume_of_bottles = num_bottles * volume_per_bottles;
  
   const double volume_per_cans = .355;//each soda can has .355 ml or 0.355 liter.
   int num_cans = 12;
   double volume_of_cans = num_cans * volume_per_cans;

   double total_volume = volume_of_bottles + volume_of_cans;

   cout << "The total volume of "
        << num_bottles << "2-liter bottle"
        <<"and" << num_cans << "cans is"
        <<total_volume <<endl;

    return 0;

 }
