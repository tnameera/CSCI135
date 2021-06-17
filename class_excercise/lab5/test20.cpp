

#include <iostream>

using namespace std;

    int numStartsWith(string str[], char ch, int size){
    int num = 0;
    
     for ( int i = 0; i < size; i++)
     {
         if ( str[i][0] == ch){
             num = num + 1;
         }
     }
    return num;
}

int main() {

    string str[] = { "apple", "banana" , "orange"};
    char ch = 'a';
    int num = numStartsWith ( str, ch,3);
    cout << " num is:" << num << endl;
    return 0;
}
