#include "FuelTank.hpp" 
//FuelTank.hpp is in the same directory as FuelTank.cpp

//default constructor
//A default (typical) fuel tank starts with current gas level 0.
FuelTank::FuelTank()
{
    currGasLevel = 0;
}

//non-default constructor
FuelTank::FuelTank(int startLevel)
{
    if (startLevel >= 0)
       currGasLevel = startLevel;
    else currGasLevel = 0;
}

FuelTank::~FuelTank()
{
}

//put const after the parameter list in ()
//means this method getGasLevel (belong to FuelTank class)
//cannot modify the contents of the object.
int FuelTank::getGasLevel() const
{
    return currGasLevel;
}

void FuelTank::sendGas(int gallons)
{
     if (currGasLevel >= gallons)
        currGasLevel -= gallons;
        //Warning: do not write as
        //currGasLevel =- gallons;
}

void FuelTank::fillGas(int gallons)
{
     currGasLevel += gallons;
}
