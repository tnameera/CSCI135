/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskB

Write a program social2.cpp, implementing the first version of the class Network 
(feel free to copy your class Profile and anything else from the previous program).
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
    Profile(string username, string displayname);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

//profiel function
Profile :: Profile(string username, string displayname){
    this -> username = username;
    this -> displayname = displayname;
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

//full class declaration is shown below

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
};

//newwork function
int Network:: findID(string usrn){
    for (int i = 0; i < numUsers; i++)//loop through all users limiting factor
    {   //profile[i] is a profile object
        if (profiles[i].getUsername() == usrn)
        //return id, which is index of th object array [i]
        {
            return i;
        }
    }
    return -1; // if username is not in use or found then we return -1
}

// network constructor
Network :: Network(){
    //create initially empty network
    numUsers = 0;
}

// check before we update the data members
bool Network:: addUser(string usrn, string dspn){
    //username must contain text
    if(usrn == "")//username cannot be empty
    {
        return false;
    }
    // other conditon:newtwork must have space and username must be unique
    if (numUsers < MAX_USERS && findID (usrn) == -1){ // there is spcae and poteial user name is unique
        //username must e alphanumertic
        for (int i = 0; i < usrn.length(); i ++)
        {
            if (!isalnum(usrn[i]))
            {
                return false; // not valid username since all conditions are not met
            }
        }
        //username contains text
        //username is alphanumeric
        //checked network has space and unique
        // if all conditions are met we want to add the user
        
        //add a new profie
        //increase the number of users
        Profile p(usrn, dspn);
        profiles [numUsers] = p;//if one person in array index[0]...following [1][2]
        numUsers++;
        return true;
        } else 
        { //username exists or profiles [] at capacity
        return false;
    }//we successfuly add a profile to network
}
int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)
    //array will be at capacity
  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}
