#include <iostream>
using namespace std;

int main()
{
    string str = "\"";
    cout << "number of letter(s) in a string initializd by \"\\"
         << str << "\" is " << str.length() << "." << endl;
    //\" means double quote symbol, 
    //where backslash symbol before " means " does not carry
    //its normal duty to indicate the beginning and end of
    //a string literal.
    //Similarly, \\ means to display a single backslash symbol.
    return 0;
}