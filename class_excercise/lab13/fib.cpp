#include <iostream>
#include <vector>

using namespace std;

int fib(int n){
    if (n == 0 || n == 1)
        return 1;
    
    return fib(n-1) + fib(n-2);
    
}

int fib2(int n){
    int f[n+1];
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
    
}

int main(){

    cout << fib(5) << endl;
    cout << fib2(5) << endl;

    return 0;
}