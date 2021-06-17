#include <iostream>

using namespace std;


int main()
{
    int seen[10] = {0};
    int num;
    int rem;
    cout << "Please enter a number " << endl;
    cin >> num;

    while (num >0)
    {
        rem = num % 10;
        if (seen[rem] == 1) 
            break;
        seen[rem] =1;
        num = num /10;
    }   

    if (num > 0)
        cout << "yes" <<endl;
    else
        cout << "no" << endl;



//for alpahbets
    char seen1[26] = {0};
    int num1=0;
    string word = "that";
    
    for(int i = 0; i < word.length(); i++)
    {
        int idx = word[i] - 'a';
        cout << i << "," << idx << endl;
        if (seen1[idx] == 1){
            num1 = 1;
            break;
        }
        seen1[idx] = 1;
    }   

    if (num1 > 0)
        cout << "yes" <<endl;
    else
        cout << "no" << endl;
    return 0 ;



}

