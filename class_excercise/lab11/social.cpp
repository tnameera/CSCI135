/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task A

In this task, write a program social.cpp, in which you
have to implement the class Profile that can store the info about a user of the network.
*/

#include <iostream>
#include <string>
using namespace std;

//given class definition
class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

//part 2 implementation

//set member variables  = parameters
Profile :: Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}

// default
//setting data members to empty string
Profile :: Profile(){
    username = "";
    displayname = "";
}
string Profile::getUsername() { 
    return username; 
}
string Profile::getFullName() { 
    return displayname + " (@" + username + ")"; 
}
void Profile::setDisplayName(string dspn) {
    displayname = dspn;
}

// testing the class
int main() {                                                                                                                                                                                                                                                                                                                                                                                                         
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}
 