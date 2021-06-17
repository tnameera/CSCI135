/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskC

Write a new program social3.cpp, which is an improved version of the previous program.
*/

#include <iostream>
#include <string>
using namespace std;

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
    string printUsername();
    //Return namein the format: "displayname(@username)" 
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

class Network {
private:
    static const int MAX_USERS = 20; // max number of user profiles
    int numUsers;                    // number of registered users
    Profile profiles[MAX_USERS];     // user profiles array:
                                    // mapping integer ID -> Profile
    bool following[MAX_USERS][MAX_USERS];  // friendship matrix:
    // following[id1][id2] == true when id1 is following id2                                
    //Returns user ID (index in the 'profiles' array) by their username
    // (or -1 if username is not found)
    int findID (string usrn);

public:
    // Constructor, makes an empty network (numUsers = 0)
    Network();
    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
    bool addUser(string usrn, string dspn);
    //Makes 'usrn1' follow 'usrn2'(if both usernames are in the network
    //return true if the operation was successful, otherwise return false)
    bool follow (string usrn1, string usrn2);
    //prints Dot file (graphical representation of the network)
    void printDot();
    };
    

    //profiel function
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
string Profile::printUsername() { 
    return + "@" + username + ""; 
}
void Profile::setDisplayName(string dspn) {
    displayname = dspn;
} 


//newwork function
//initialize 2 dimensional array
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

Network :: Network(){
    //create initially empty network
    numUsers = 0;
    for (int i = 0; i < MAX_USERS; i++)
    {
        for (int j = 0; j < MAX_USERS; j++)
        {
            following [i][j] = false;
        }
    }
}

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
        
        //add a new profie increase the number of users
        Profile p(usrn, dspn);
        profiles [numUsers] = p;//if one person in array index[0]...following [1][2]
        numUsers++;
        return true;
        } else 
        { //username exists or profiles [] at capacity
        return false;
    }//we successfuly add a profile to network
}

bool Network::follow(string usrn1, string usrn2){
    int id1 = findID(usrn1);
    int id2 = findID (usrn2);

    //both username EXIT_SUCCESSif
    if (id1 != -1 && id2 != -1){
        following[id1][id2] = true;
        return true;
    }
    else
    {
        return false; // opeation not successful because one or both Username exist do not exist
    }
    
}

void Network ::printDot(){
    cout << "digraph {" << endl;
    for (int i = 0; i < numUsers; i++)
    {
        cout << "  \"" << profiles[i].printUsername() << "\""  << endl;
        //or 
        //string usrn = profiles[i].getUsername;
        //cout << profiles[i].printUsername() << endl;
    }
    for (int i =0; i < numUsers; i++)
    {
        for (int j = 0 ; j <  numUsers; j++)
        {
            if (following[i][j] == true)
            {
                cout << "  \"" << profiles[i].printUsername()<< "\"" << " -> ";
                cout << "\"" <<profiles[j].printUsername() << "\"" << endl;
            
            }
        }
    }
    cout << "}" << endl;
}

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}
