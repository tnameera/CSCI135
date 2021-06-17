

#include <iostream>

using namespace std;

void print_triangle(int n)
{
    if ( n % 2 != 0){
        int row = n/ 2+1;
        int col = n;

        for (int i = 0; i < row ; i++){
            for ( int j =0; j < col; j++){
                if ( i + j >= 2 && j-i<=2 ){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;    
        }
    }
}

    int main (){
        int n = 5;
        print_triangle(n);
        return 0;
    }
    


