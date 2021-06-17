/*Lab Quiz 11 - Money Define class Money, which contains public int members dollars and cents 
A NON-member function `Money add_money(Money x, Money y)` 
which returns a Money object that contains sum of x and y in dollars and cents. Value in cents is < 100.*/

#include <iostream>

using namespace std;

class Money{

public:

    int dollars;
    int cents;

    // Money(int i = 0 ,int j = 0)
    // {
    //     dollars = i;
    //     cents = j;
    // }
       
};
Money add_money(Money x, Money y)
{
    Money sum;
    sum.dollars = x.dollars + y.dollars;
    sum.cents= x.cents + y.cents;
    if (sum.cents >= 100)
    {
        sum.dollars += sum.cents/100;
        sum.cents = sum.cents%100;
    }

    return sum;
}

int main(){
    Money s1{320};
    Money s2{420};
    Money s3 = add_money(s1, s2);
    cout << s3.dollars << " " << s3.cents<< endl;  
    return 0;
}
