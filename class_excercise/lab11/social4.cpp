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
//added for this social4
struct Post{
  string username;
  string message;
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
    //added for this social4
    static const int MAX_POSTS = 100;
    int numPosts;                    // number of posts
    Post posts[MAX_POSTS];           // array of all posts


public:
    // Constructor, makes an empty network (numUsers = 0)
    Network();
    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
    bool addUser(string usrn, string dspn);
    //Makes 'usrn1' follow 'usrn2'(if both usernames are in the network
    //return true if the operation was successful, otherwise return false)
    bool follow (string usrn1, string usrn2);
    
    // Add a new post
    bool writePost(string usrn, string msg);
    // Print user's "timeline"
    bool printTimeline(string usrn);

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
string Profile::getFullName() {
    return displayname + " (@" + username + ")";
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
    numPosts = 0;
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

bool Network::writePost(string usrn, string msg){
    int usrn1 = findID(usrn);
    if (usrn1 == -1)
        return false;

    if (numPosts == MAX_POSTS )                  // number of posts
        return false;

    posts[numPosts].username = usrn;
    posts[numPosts].message = msg;

    numPosts++;    

    return true;
}

bool Network::printTimeline(string usrn){
    int usrn1 = findID(usrn);
    if (usrn1 == -1)
        return false;

    for (int i = numPosts-1; i >= 0; i--){
        Post p = posts[i];
        int writerindex = findID(p.username);

        if(p.username == usrn) {
            cout << profiles[usrn1].getFullName() << ": " << p.message << endl;
        } else if(following[usrn1][writerindex]) {
            cout << profiles[writerindex].getFullName() << ": " << p.message << endl;
        }
    }
    return true;
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
    
    nw.follow("mario", "luigi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");

    // write some posts
    nw.writePost("mario", "It's a-me, Mario!");
    nw.writePost("luigi", "Hey hey!");
    nw.writePost("mario", "Hi Luigi!");
    nw.writePost("yoshi", "Test 1");
    nw.writePost("yoshi", "Test 2");
    nw.writePost("luigi", "I just hope this crazy plan of yours works!");
    nw.writePost("mario", "My crazy plans always work!");
    nw.writePost("yoshi", "Test 3");
    nw.writePost("yoshi", "Test 4");
    nw.writePost("yoshi", "Test 5");

    cout << endl;
    cout << "======= Mario's timeline =======" << endl;
    nw.printTimeline("mario");
    cout << endl;

    cout << "======= Yoshi's timeline =======" << endl;
    nw.printTimeline("yoshi");
    cout << endl;
}
