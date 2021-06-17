/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: TaskF,lab9

*/

#include <iostream>
#include <cmath>
#include <iterator>


using namespace std;

class Coord3D { // user defined object
public:
    double x;// class objject made up of 3 values
    double y;
    double z;// do we still need this?
};

class Particle { // user defined object
public:
    double x;// class objject made up of 3 values
    double y;
    double z;
    double vx;
    double vy;
    double vz;
};

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x1, double y1, double z1, 
                         double vx1, double vy1, double vz1)// are we copying the values here?
{
    Particle *p;
    p=(Particle*)malloc(sizeof(Particle));  //?? memory allocation 
    //if size of Particle is n, allocation n memory locations to p 
    p->x=x1;//double x =(*p).x derefernce p initialize it
    p->y=y1;
    p->z=z1;
    p->vx=vx1;
    p->vy=vy1;
    p->vz=vz1;
    return p;
}

// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz)
{
    p->vx=vx;//dereference and set new velocity
    p->vy=vy;
    p->vz=vz;
}


// get its current position
Coord3D getPosition(Particle *p)
{
    Coord3D cd;// new object Coord3D with pointer cd??
    cd.x=p->x; //pointer cd = //double x =(*p)??
    cd.y=p->y;
    cd.z=p->z;
    return cd;
}


// update particle's position after elapsed time dt
void move(Particle *p, double dt)
{
    static int i=0;// use int and even declare in int
    p->x+=i*dt;
    p->y+=.03;
    p->z+=.01;
    i++;
}

// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){

    delete p;
}

int main(){
{
    Particle *p=createParticle(1.0,1.5,2.0,0.1,0.2,0.3);
    double time=0, dt=0.1;
    while(time<3)
    {
    setVelocity(p,10*time,0.3,0.1);
    move(p,dt);
    time+=dt;
    cout<<"\nTime:"<<time<<"\t";
    cout<<"Posion: ";
    cout<<getPosition(p).x<<",";
    cout<<getPosition(p).y<<",";
    cout<<getPosition(p).z<<endl;
    }
    deleteParticle(p);
    return 0;

}


}