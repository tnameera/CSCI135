/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskE,lab8

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

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

int main() {

	int img[MAX_H][MAX_W];// 2 dimesional array using max width and height
	int h, w;// declaring value for actual height and width

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];
    int average;

       /*
        0   1   2   3
    0   10  20  30  40                      
    1   11  21  31  41
    2   12  22  32  42 
    3   13  23  33  43 
                                
                
   
        0   1   2   3
    0   16  16  36  36                      
    1   16  16  36  36
    2   18  18  37  37 
    3   18  18  37  37 
                                
    */

        // goes thru out image pixels since the dimensions are different
        for(int row = 0; row < h; row+=2) {
		    for(int col = 0; col < w; col+=2) {
                average =(]img[row][col + img[row+1][col]+img[row][col+1]+ img[row+1][col+1] )/4;
               
                out[row][col] = average; //  calculate the average of the sqaure
                out[row+1][col] = average; // set pixels of the square to average
                out[row][col+1] = average; 
                out[row+1][col+1] = average; 

            }// done with col
        }// doen with row 
	

	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);

}           
