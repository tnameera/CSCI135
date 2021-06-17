/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: title, e.g., Lab1A

// convert numerical grade to letter grade
// using switch statement
// a, b,c,d, f are mutually exclusive values.cant get 2 of them at t a time
*/

#include <iostream>

using namespace std;

int main(){

        cout << "Enter a nyumerical Grade: ";
        double grade;
        cin>> grade;

        char letterGrade;
        switch ((int) grade /10) // possible value 0 to 100. also for claculation purpose wwitch to int\
        // both numerator and denominator divided by 10 both being integer gives us a int quotient


        // there can 101 cases for 0-100
        // such as 
        // case 100:
        //case 99
        //........
        // consider the common thing between 99 and 91 is the tenth place digit
        // divide 99/10 and 91/10 both are integer division

        {

            case 10:// 100 /10 we get 10
            case 9: // 99\10 we get 9
                letterGrade = 'A';
                break; // break outside the switch block inside curly braces\

            case 8: letterGrade = 'B';
                break;

            case 7: letterGrade = 'C';
                break;

            case 6: letterGrade = 'D';
                break;

            default: letterGrade = 'F';// rest of letter denote F
            
        }

        cout << "letter grade = " << letterGrade << endl;

    return 0;
}
