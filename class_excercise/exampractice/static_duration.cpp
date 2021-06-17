#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

void incrementPrint(){
    static int s_value = 1;//static duration
    ++s_value;
    cout << s_value << endl;
    //s_valye is not destroyed
    //but becomes inaccessible
}

int main(){

    incrementPrint();//calling the function
    incrementPrint();
    incrementPrint();
}

//uniqie identifier generator
//each computer will have id -1,2,3


int generateId(){
    static int s_itemId = 0;
    return s_itemId++;
    //returns value of the increment id
    //is local varibale but much safer for use than global varibales
    //exists till end of program
}