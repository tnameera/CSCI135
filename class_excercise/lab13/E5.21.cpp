/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.21

Write a recursive function

string reverse(string str)
that computes the reverse of a string. 
For example, reverse("flow") should return "wolf". 
Hint: Reverse the substring starting at the
second character, then add the first character 
at the end. For example, to reverse "flow", 
first reverse "low" to "wol", 
then add the "f" at the end.
*/

#include <iostream> 
#include <string>   

using namespace std;

string reverse(string str)
{
    if (str.empty())//if sring is empty base case 
    {
        return str;
    }
    if (str.length() == 1)//if sring is empty base case 
    {
        return str;
    }
    return reverse(str.substr(1)) + (str[0]) ;//recursice call

}
int main(){
    string x = reverse("wolf");
    cout << "reverse is " << x << endl;
    return 0;
}
