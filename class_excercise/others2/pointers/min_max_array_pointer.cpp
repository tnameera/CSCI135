#include <iostream>

using namespace std;

void minMax(int arr[],int len,int *min, int *max)
{
    *min = *max = arr[0];//derefernce max and min
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > *max)//here *max =arr[0] so compare with the 2nd value in array
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int a[] = { 23, 4, 21, 987, 45, 32, 19, 8, 0, 10};
    int min, max;
    int len = sizeof(a)/ sizeof(a[0]);
    minMax (a,len, &min, &max);
    cout <<"minimum value in the array is: " << min << endl;
    cout <<"maximum value in the array is: " << max << endl;
    return 0;

}
