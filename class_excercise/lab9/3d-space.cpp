/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskE,lab9
Task A program 3d-space.cpp, in which you define a function length() 
that receives the coordinates of a point P passed as a pointer, and computes the distance from the origin to the point P:

Task B In the same file 3d-space.cpp, add a functioN
Which receives the coordinates of two points (passed as pointers), and returns the pointer of the point
// that is farther away from the origin.

Task C
Let’s consider an object moving in 3D space. We already know how to describe its position. 
//(We will be assuming metric system, thus distances will be implicitly measured in meters and time in seconds.)

Task E
In the program 3d-space.cpp, add functions that create, delete, and coordinate objects dynamically:
*/

#include <iostream>
#include <cmath>
#include <iterator>


using namespace std;

class Coord3D { // user defined object
public:
    double x;// class objject made up of 3 values
    double y;
    double z;
};

//Task A

double length(Coord3D* p){
    // get the values from Coord3D object that p points(x,y,z)
    // p is the memory address, at the address is a Coord3D object
    
    // Coord3D point = *p;
    // to get the values derefence the pointer
    // p is equal to the object at the momory address p
    //cout << point.x << endl;// data members of objects since we have dereferenced it

    double x = p->x; // double x = (*p).x, deference + dot notation
    double y = p->y; // double x = (*p).y;arrow refers I want to derefence p, ie get the actual value of p ans also use access object data member
    double z = p->z; // double x = (*p).z;;

    //point P's distance from origin
    return sqrt(x*x + y*y + z*z);
}


//Task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{   // returning a 3d pointer
    // returning whicever point is further from the origin
    // donto need to derefenrence since the function is taking pointer
    if (length (p1) > length (p2))// pass them to length function  determines ditance from origin
    {
       return p1;
    }
    else;
    {
        return p2;
    }
}

//Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    // need to update x, y and z values od ppos the object here
    // x' = x + vel.x * dt;
    // y' = y + vel.x * dt;
    // ' = z + vel.x * dt;
    // the same funciton can be written as 
    // dereferencing the ppos and pvel to access the member values

    ppos->x = ppos->x + pvel ->x * dt; //x + dx/dt change in pos due to change in velocity
    ppos->y = ppos->y + pvel ->y * dt; //(*ppos).x ==  ppos->x
    ppos->z = ppos->z + pvel ->z * dt; 
}

//Task E

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D* value = new Coord3D;

    value->x = x;// derefence and use the dot notation to address the members in the object
    value->y = y;
    value->z = z;

    return value;// returning the memory address of the object. 
    //because that is the only way we can access the members of the object x,y,z
}

// free memory
void deleteCoord3D(Coord3D *p){
    delete p;// clear the moemory at tht object
    p = nullptr;// access p again after deleting
    
}


int main(){
     
    //Task A
    //Coord3D pointP = {10, 20, 30};
    //cout << length(&pointP) << endl; // would print 37.4166

    //Task B
    //Coord3D pointP = {10, 20, 30};
    //Coord3D pointQ = {-20, 21, -22};

    //cout << "Address of P: " << &pointP << endl;
    //cout << "Address of Q: " << &pointQ << endl << endl;

    //Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);// ans can have any name
   
    //cout << "ans = " << ans << endl; // So which point is farther?
   
    //Task C
    
    //Coord3D pos = {0, 0, 100.0};
    //Coord3D vel = {1, -5, 0.2};

    //move(&pos, &vel, 2.0); // object pos gets changed
    //cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
    
    //Task E

    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);// returnign the meomeory location of the address ie ppos == 
    //smomeory add where point is stored
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);// call to new

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory. for every call to delete
    deleteCoord3D(pvel);

    cout << ppos->x << endl;

    return 0;
}
