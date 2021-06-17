

#include <iostream>
#include <cmath>


using namespace std;

int main(){
    double a,b,c;
    double result;
    cin>> a;
    cin >> b;
    cin >> c;

    if (a+b< c || b+c < a || a+c < b)
    {
    return 0;
    }
    else { 
        double p = (a+b+c)/2;
        double result = sqrt((p* p-a)*( p-b) * ( p-c));
    }
    cout << "result : " << result << endl;

    return 0;
}
