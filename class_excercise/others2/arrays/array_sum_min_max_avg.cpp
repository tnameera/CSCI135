#include <iostream>

using namespace std;

void calminmaxavg(double data[], int size, double& min, double& max, double& avg, double& sum){
    if (size <= 0)
        return;
    
    min = data[0];
    max = data[0];
    avg = 0;
    sum = 0;
    //int sum = 0;

    for(int i = 0; i < size; i++)
    {
        cout << data[i];
        sum = sum + data[i];
        if (data[i] > max)// have to access data by data[i]
        {
            max = data[i];
        }
        if (data[i]< min)
        {
            min = data[i];
        }
    }
    avg = sum/size;
    cout << endl;

 
}

int main()
{
    double data[]={10.0,5.0,20.0,30.0};
    double min = 0, max = 0, avg = 0, sum = 0; //variables defined and initialized here
    //Note the '= 0' on all variables, it's important else they'll have random values
    calminmaxavg(data, sizeof(data)/sizeof(data[0]), min, max, avg, sum);

    //Your function has modified min, max, and avg, so you use them here
    cout << min << ", " << max << ", " << avg << ", " << sum << endl;
    return 0;
}