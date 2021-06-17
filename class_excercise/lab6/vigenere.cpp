/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task C

A program vigenere.cpp. It should contain a function encryptVigenere implementing this cipher:

string encryptVigenere(string plaintext, string keyword);
You may assume that the keyword contains only lowercase alphabetic characters a - z.

*/

#include <iostream>

using namespace std;

string encryptVigenere(string plaintext, string keyword);

int main(){

    string text , key;
    cout << "Enter plaintext: " << endl;
    getline(cin, text);
    cout << "Enter keyword:" << endl;
    cin >> key;

    //print result of encryptVigenere
    cout << "Ciphertext: " << encryptVigenere(text, key) << endl;
    }

    // Vigenere cipher encryption
    string encryptVigenere(string plaintext, string keyword) {
        string encryption = "";
        char curr; //char to be encrypted
        int num = 0; //index for key
        int key; //amount to shift by
        int newPos; //0-25
    

        //iterating through each character in text
        for (int i = 0; i < plaintext.length(); i++)
        {
            curr = plaintext[i]; // set curr to whtever char at present character in plain text

            //if uppercase
            if (isupper(curr)) { 
                //get shift distnace based off keyword
                //convert key char to 0-25
                //if first numis c then c=3 from a. so key =3-1=2
                key = keyword[num]-'a';
                //go to next letter in keyword
                //cake, num = 3 +1 = 4%4(since cake)=0
                num = (num + 1) % keyword.length();
                //get shifted position
                newPos = ( curr -'A' + key) % 26;
                //new char is determined by
                //how many positions from 'A' (0-25)
                curr = 'A' + newPos;
            }

            //if char is lowercase
            else if(islower(curr)) {
                key = keyword[num] -'a';
                num = (num + 1) % keyword.length();
                newPos = ( curr -'a' + key) % 26;
                curr = 'a' + newPos;
            
        }
        //add encrypted char to result atring
            encryption += curr;
        // doen encrypting plaintext
        //return resulting string
      
    }
    return encryption;
            
}
        
        






