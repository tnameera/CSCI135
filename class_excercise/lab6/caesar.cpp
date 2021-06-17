/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task B

A program caesar.cpp with functions implementing Caesar cipher encryption:

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);
*/

#include <iostream>

using namespace std;

  // A helper function to shift one character by rshift
    char shiftChar(char c, int rshift);

    // Caesar cipher encryption
    string encryptCaesar(string plaintext, int rshift);

int main(){
    string text;
    int shift;
    cout << "Enter Plaintext: " << endl;
    getline (cin, text);
    cout << "  Enter shift: " << endl;
    cin >> shift;

    //print result of encryptCeaser
    cout << encryptCaesar(text, shift) << endl;
    }

    // A helper function  to shift one character by shift. Taking single character and making a shift
    char shiftChar(char c, int rshift) {
        char newChar;
        if (isupper(c)) { 
            newChar = (c - 'A' + rshift) % 26 + 'A';//c -'A' will represent the char as the value from 0-25.How far from A. my character value from 
            return newChar;
        }

        //if char is lowercase
        else if(islower(c)) {
            char newChar  = ( c- 'a' + rshift)%26 + 'a';
            return newChar;
        }
        //if char is not alphabetical
        else {
            return c; // return char unchnaged
        }
       
    }

    // caesar cipher encryption
    string encryptCaesar (string plaintext, int rshift) {
        string encryption = "";// new string which is encripted text
        // iteration through each character in text apply shiftcar
        for (int i = 0; i < plaintext.length(); i++)
        {
            encryption += shiftChar(plaintext[i] ,rshift);//Pass shift with each c in plaintext

        }

        return encryption;
    }



