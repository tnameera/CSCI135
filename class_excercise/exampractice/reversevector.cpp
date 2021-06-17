#include <iostream>
#include <vector>

using namespace std;


//Write a function vector<int>reverse(vector<int> v), return the reverse of a vector. For example, 
//if the original vector has contents [1, 2, 3], the returned vector has contents [3, 2, 1]. 
 
vector<int> reverse(vector<int> v)
{

    vector <int> res;
    for (int i = v.size(); i > 0; i--)
    {
        res.push_back(v[i]);
    }
    return res;
}



int main()
{
    vector<int> a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(71);

    vector<int> result;
    result = reverse(a);

    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return  0;

}
