/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: title, e.g., Lab1A

Lab Quiz 12 Define class Customer. private string members name, unique_id; public: Customer(), 
Customer(string name, string unique_id), string get_name(), string get_unique_id(), 
void set_name(string input_name), void set_unique_id(string input_unique_id)
*/

#include <iostream>

using namespace std;

class Customer{

    public:
        Customer();
        Customer(string name, string unique_id);
        string get_name();
        string get_unique_id();
        void set_name(string input_name); 
        void set_unique_id(string input_unique_id);
   

    private:
        string name; 
        string unique_id;

};

Customer::Customer()
{
    name = "";
    unique_id = "";
}

Customer::Customer(string name, string unique_id)
{
    this->name =name;
    this->unique_id = unique_id;
}

string Customer::get_name()
{
    return name;
}

string Customer::get_unique_id()  
{
    return unique_id;
}

void Customer::set_name(string input_name)  
{
    name = input_name; 
} 

void Customer::set_unique_id(string input_unique_id)
{
    unique_id = input_unique_id;
}



int main(){
    return 0;
}
