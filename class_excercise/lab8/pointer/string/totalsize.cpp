#include <iostream>
#include <string>

int main()
{
  int a[] = {2, 4, 6, 8, 10};
  int *p = a;
  int size = 5;
  int total = 0;
  /*while (size > 0) {
    total = total + *p;
    p++;
    size--;
  }
  while (size-- > 0)
    total = total + *p++;*/
    std::cout << '\n' << *++p; //total;
    std::cout << '\n' << *p; 
}

 
 