#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;


double findMin(vector<int> v){
    double min = v[0];
    int idx = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] < min){
            min = v[i];
            idx = i;
        }
    }
    return min;
}

int findMinIdx(vector<int> v){
    double min = v[0];
    int idx = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] < min){
            min = v[i];
            idx = i;
        }
    }
    return idx;
}

double findMax(vector<int> v){
    double max = v[0];
    int idx = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] > max){
            max = v[i];
            idx = i;
        }
    }
    return max;
}

int findMaxIdx(vector<int> v){
    double max = v[0];
    int idx = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i] > max){
            max = v[i];
            idx = i;
        }
    }
    return idx;
}

double findSum(vector<int> v){
    double sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum = sum + v[i];
    }
    return sum;
}

double findAvg(vector<int> v){
    double sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum = sum + v[i];
    }
    return sum/v.size();
}

vector<int> reverse(vector<int> v)
{
    vector <int> res;
    for (int i = v.size(); i > 0; i--)
    {
        res.push_back(v[i]);
    }
    return res;
}

vector<int> scale(vector<int> v, double s)
{
    vector <int> res;
    for (int i = 0; i <= v.size(); i++)
    {
        res.push_back(s*v[i]);
    }
    return res;
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(-3);
    a.push_back(40);
    a.push_back(5);

    double min = findMin(a);
    cout << min << endl;

    double maxIdx = findMaxIdx(a);
    cout << maxIdx << endl;

    cout << findAvg(a) << endl;
    return 0;
}
