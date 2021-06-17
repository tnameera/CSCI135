#pragma once
#ifndef COMPETITION_H //
#define COMPETITION_H
#include "Hare.h"
#include "Tortoise.h"
#include "Road.h"

// before you start the project you would like to think what are the date members/ objects involved?
//tortoise, hare and road

class Competition
{
private:
    Hare* rabbit;//otherwise to disntict class and object use diff name
    Tortoise* turtle;//if no * then it will be object and take more space
    Road* track;
    
public:
    Competition();
    Competition(Hare* hare, Tortoise* tor, int lenth);
    ~Competition();//destructro
    void start();//or can say play/start
};//dont forget

#endif