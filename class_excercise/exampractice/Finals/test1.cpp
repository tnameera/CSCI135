#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

//Given string countries[] = {"US", "Canada", "China"}; then countries[1].size() returns 6.

using namespace std;

int main()
{

    

string strs[] = {"a", "b", "c", "d"};     
int* p = strs;     
p += 1;   
cout << *p;

return 0;
}


