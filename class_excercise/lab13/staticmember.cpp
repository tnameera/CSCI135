#include <iostream> 

using namespace std;

class Box {
public:
    static int objectCount;
    Box();
};

int Box::objectCount = 0;

Box::Box() {
     objectCount++;
}

int main(void) {
   Box a;
   Box b;
   Box c;
   cout << Box::objectCount << endl;
   return 0;
}