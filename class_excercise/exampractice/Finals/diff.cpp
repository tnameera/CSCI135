#include <iostream>
#include <vector>
#include <iomanip>
#include <string>


using namespace std;

int diff(string str1, string str2){
    int lenght1 = str1.length();
    int lenght2 = str2.length();

    //cout << lenght1 << " " << lenght2;
    int count = (lenght2 -  lenght1);

    for ( int i = 0; i < min( lenght1, lenght2) ; i ++)
    {
        if (str1[i] != str2[i])
        {
            count++;
        }
    }

    return count;
}


int main()
{
    string str1 = "abc";
    string str2 = "bbcef";


    cout << diff(str1,str2) << endl;

    return 0;
}


