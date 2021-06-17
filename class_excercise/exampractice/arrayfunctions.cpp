#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;


double findMin(double arr[], int size){
    double min = arr[0];
    int idx = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
            idx = i;
        }
    }
    return min;
}

int findMinIdx(double arr[], int size){
    double min = arr[0];
    int idx = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
            idx = i;
        }
    }
    return idx;
}

double findMax(double arr[], int size){
    double max = arr[0];
    int idx = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
            idx = i;
        }
    }
    return max;
}

int findMaxIdx(double arr[], int size){
    double max = arr[0];
    int idx = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
            idx = i;
        }
    }
    return idx;
}

double findSum(double arr[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

double findAvg(double arr[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum/size;
}

int main()
{
    double arr2[] = {1,2,-3,40,5};
    int len = sizeof(arr2)/sizeof(arr2[0]);
    double min = findMin(arr2, 5);
    cout << min << endl;

    double maxIdx = findMaxIdx(arr2, len);
    cout << maxIdx << endl;

    cout << findAvg(arr2, 5) << endl;

    return 0;
}
