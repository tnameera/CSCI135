/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.16

Define a structure Point. A point has an x- and a y-coordinate. 
Write a function double distance(Point a, Point b) that computes the distance from
Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/
//1. To use sqrt and pow function, it would be better to add the following line:
//2. Define class or struct Point (either way is fine). Note that the type of x- and y-coordinate are double, not int.
//distance function is double type, not int. Define function
//double distance(Point a, Point b)


#include <iostream>
#include <cmath>

using namespace std;

// make a class
struct Point{// Define class or struct Point
    double x;
    double y;
};
double distance(Point a, Point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));  // calculatin the distance similar to sqrt(x*x+y*y)= pow(x,2)
}


int main(){
    Point p1,p2;// new pointer to call a and b 
    cout << "Enter x and y of point 1:";
    cin >> p1.x >> p1.y;

    cout << "Enter x and y of point 2:";
    cin >> p2.x >> p2.y;
    cout << "Distance between the two given points is " << distance (p1,p2) << endl;
    return 0;

}



