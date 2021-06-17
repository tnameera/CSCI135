#include <iostream>

using namespace std;

int main(){

    int width, height, space;
    cout << "Input width ";
    cin >> width;
    cout << "Input height ";
    cin >> height;



    for (int i = 0; i < height ; i++){

        for ( int j = 0; j < i; j++)
        {
            cout << j;
            cout << " ";
        }
        for ( int k = i ; k < width ; k--
        )
        {
            cout << k;
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}