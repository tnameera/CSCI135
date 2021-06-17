#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int foo(int num)

{

    if (num <= 0)//base

        return 0;

    return foo(num-1) + num;

}


int main()

{

cout << foo(3) << endl;

cout << foo(-1);

cout <<endl;

//cout << foo();

    return 0;
}
