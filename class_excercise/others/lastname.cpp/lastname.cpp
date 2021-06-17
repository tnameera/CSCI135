//File name: /Users/syedrahman/Documents/CSCI135/class_excercise/lastname.cpp/lastname.cpp
#include <iostream>
using namespace std;

int main()
{
   
    cout << "Enter your name: ";
    string first_name;
    cin >> first_name;

    string last_name;
    cin >> last_name;

    cout << "Hello " + last_name + ", " + first_name << endl;

    //concatenate first name with last name, put in variable full_name.
    string full_name = first_name + " " + last_name;
    int n = full_name.length();
    cout << full_name + " has " << n << " letters. " << endl;

    //construct the initial of my name using first letter of first name
    //and the first letter of the last name.

    //letter saves the first letter of first name.
    string letter = first_name.substr(0, 1);
    //letter2 saves the first letter of last name.
    string letter2 = last_name.substr(0, 1);

    string initial = letter + letter2;
    cout << "Your initial is " << initial << endl;
    return 0;
}
  
