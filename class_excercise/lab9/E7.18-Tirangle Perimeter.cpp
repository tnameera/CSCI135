/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.18

Define a structure Triangle that contains three Point members. Write a function that computes the perimeter of a Tr
Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point{// Define class or struct Point
    double x;
    double y;
};

// structure of triangle

struct Triangle{// a new class because we need 3 parameters?
    Point a;
    Point b;
    Point c;// why are they called points??

};

// find and return the distance between two points
double distance(Point a, Point b)

{
    return sqrt( (double)( ( a.x - b.x ) * ( a.x - b.x ) + ( a.y - b.y ) * ( a.y - b.y ) ) );//??
}

double perimeter(Triangle tri)
{
    // perimeter is the sum of all 3 sides 
    return distance (tri.a,tri.b)+ distance (tri.b,tri.c)+ distance (tri.c,tri.a);// ??
    
}


int main(){

    double x1, y1, x2, y2, x3, y3;

    cout<<"Point 1 : ";
    cin>>x1>>y1;


    cout<<"\nPoint 2 : ";
    cin>>x2>>y2;

    cout<<"\nPoint 3 : ";
    cin>>x3>>y3;

    Point a,b,c;

    Triangle tri;

    tri.a.x = x1;
    tri.a.y = y1;

    tri.b.x = x2;
    tri.b.y = y2;

    tri.c.x = x3;
    tri.c.y = y3;

    cout << "perimeter: " << perimeter(tri);

    return 0;
}

