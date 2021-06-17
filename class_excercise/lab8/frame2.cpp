/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskD,lab8

A Program frame.cpp. Same as the previous task, but it should be a frame exactly one pixel thick..

Description:
The program reads a PGM image from the file "inImage.pgm",
and outputs a modified image to "outImage.pgm"
*/


#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 32;
const int MAX_W = 32;

int main() {

	int img[MAX_H][MAX_W];// 2 dimesional array using max width and height
	int h = 8;
	int w = 8; // declaring value for actual height and width

	//readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	//int out[MAX_H][MAX_W];

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			//print left abd right sides
            bool makeVertical = (col == w/4 || col == 3*w/4) && (row > h/4 && row < 3*h/4);
            //print top and bottom
            bool makeHorizantal = (row == h/4 || row == 3*h/4) && (col > w/4 && col < 3*w/4);

			cout << "("<< row << "," << col << ")";
		}
		cout << endl;
	}

	for(int col = 0; col < 2*w; col++){
		cout << "-";
	}
	cout << endl;

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			//print left abd right sides
            bool makeVertical = (col == w/4 || col == 3*w/4) && (row >= h/4 && row <= 3*h/4);
            //print top and bottom
            bool makeHorizantal = (row == h/4 || row == 3*h/4) && (col >= w/4 && col <= 3*w/4);

            if (makeVertical || makeHorizantal) 
            {                                                                                                                                                                                                               
                cout << " "; // create 1 pixel frame
            }
            else // pixel is outside the range of the white box
            {
                cout << "*"; // we keep the originla pixel
            }
		}
		cout << endl;
	}

	// and save this new image to file "outImage.pgm"
	//writeImage(out, h, w);

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			//print left abd right sides
            bool makeVertical = (col == w/4 || col == 3*w/4) && (row >= h/4 && row <= 3*h/4);
            //print top and bottom
            bool makeHorizantal = (row == h/4 || row == 3*h/4) && (col >= w/4 && col <= 3*w/4);

			cout << row << "," << col << " verticasl:" << boolalpha << makeVertical<< endl;
			cout << row << "," << col << " horizantal:" << boolalpha << makeHorizantal<< endl;
		}
		cout << endl;
	}
}
