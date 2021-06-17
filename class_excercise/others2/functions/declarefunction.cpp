
#include <iostream>

using namespace std;

char fun();//function has no declared the parameters


int main()
{
    char c = fun();
    cout << "character is: " << c << endl;
    return 0;
}


char fun()
{
    return'a';
}
