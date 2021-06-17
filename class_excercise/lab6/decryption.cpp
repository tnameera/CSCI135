/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Task D

A program decryption.cpp that uses the above functions to demonstrate encryption and
decryption for both ciphers.

*/
#include <iostream>

using namespace std;

string decryptCaesar(string ciphertext, int rshift);
string decryptVigenere(string ciphertext, string keyword);
string encryptCaesar (string plaintext, int rshift);
string encryptVigenere(string plaintext, string keyword);


int main(){

    //varable needed
    string plaintext;
    string keyword;
    string encryption;
    int rshift;

    cout << "Enter Plaintext: ";
    getline(cin, plaintext);

    cout << "= Caeser =" << endl;
    cout << "Enter shift: ";
    cin >> rshift;
    encryption = encryptCaesar(plaintext,rshift);
    cout << "Cliphertext: " << encryption << endl;
    cout << "Decrypted: " << decryptCaesar(encryption,rshift) << endl;
    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;
    encryption = encryptVigenere( plaintext,keyword);
    cout << "Cliphertext: " << encryption << endl;
    cout << "Decrypted: " << decryptVigenere(encryption,keyword) << endl;
}

// decrypting caeser ciper
string decryptCaesar(string ciphertext, int rshift){
    //iterating each character
    string decrypted = "";

    for (int i = 0; i < ciphertext.length(); i++){
        //will be unchanged if char is not alpha
        char curr = ciphertext[i];
        if (isupper(curr)){
            curr = 'A' + (curr - 'A' - rshift + 26 ) %26;
        }
        //if char is lowercase
        else if (islower(curr)){
            curr = 'a' + (curr - 'a' - rshift + 26 ) %26;

        }
        decrypted += curr;

    }// done decrypting
    return decrypted;
} 

// decrypting vigenenre ciper
string decryptVigenere(string ciphertext, string keyword){
    string decrypted = "";
    int num =0;
    int key;
    char curr;

    for (int i = 0; i < ciphertext.length(); i++){
        //remians unchanged if non -alpha char
        curr = ciphertext[i];

        //for uppercase
        if(isupper(curr)) {
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.length();
            curr = 'A' + ( curr - 'A' - key + 26) % 26;

        }
        //for lowercase
        else if (islower(curr)){
            key = keyword[num] - 'a';
            num = (num + 1) % keyword.length();
            curr = 'a' + ( curr - 'a' - key + 26) % 26;
        }
        decrypted += curr;
        
    }//done decrypting
    return decrypted;
}
// PREVIOUS PROGRAMS FOR RUNNING
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

// PREVIOUS PROGRAMS FOR RUNNING

// // Vigenere cipher encryption
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
