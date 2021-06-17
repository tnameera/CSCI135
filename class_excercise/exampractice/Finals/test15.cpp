#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

vector<int> value_counts(vector<int> n){
    vector<int>a;
    int b = 0;
    int c = 0;
    int d = 0;

    for (int i = 0; i < n.size(); i++)
    {
        if((n[i]>=0 && n[i] <=9) || (n[i]<0 && n[i] >=-9))
        {
            b++;
            
        }

        else if ((n[i] >=10 && n[i] <=99) || (n[i] <=-10 && n[i] >=-99))
        {
            c++;
        }

        else 
        { 
            d++;
        }
        
        //int sum = b+c+d;
        //a.push_back(sum);
        cout << i << " " <<  n[i] <<  " " << b <<  " " << c <<  " " << d << endl;
    }

    a.push_back(b);//first pishnback number of one digit
    a.push_back(c); //first pishnback number of two digit
    a.push_back(d); //first pishnback number of three digit

    return a;
}
int main(){ 

    vector<int> a;

    a.push_back(-1);
    a.push_back(-10);
    a.push_back(13);
    a.push_back(100);
    a.push_back(1300000);

    vector<int> res = value_counts(a);
    for(int i = 0 ; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}


