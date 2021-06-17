#ifndef _FUEL_TANK
#define _FUEL_TANK
class FuelTank //user defined class starts with capital letter,
//and capitalize the first letter of each meaningful word.
//(camel case convension naming)
{
public:
    FuelTank(); //Constructor has EXACTLY the same name as class,
        //case to case, letter to letter.
        //Its purpose is to initialize data member
        //and create an object with that data member.
        //No return type for Construtor(s), not even void.
        //Default constructor has NO parameter.
    FuelTank(int startLevel);
        //Create a fuel tank object with that amount
        //specified in startLevel.

    ~FuelTank(); //what to do when an object is destoried?
        //Normally, if we apply dynamic memory in constructors,
        //then we need to release memory in destructor.

    void fillGas(int gallons);
        //since currGasLevel is data member,
        //so function member fillGas can access data member
        //without any restriction since fillGas and 
        //currGasLevel belong to the same class,
        //NO need to pass currGasLevel as a parameter.
        //Increase current gas level by gallons in the
        //above parameter.

    void sendGas(int gallons);
        //send gallons of gas out from fuel tank.
        //That is, decrease the current gas level by gallons.

    int getGasLevel() const;
        //return the value of data member currGasLevel
        //const in the end means this method does not
        //change the value of data member, ie,
        //treat a data member as a const.

private:
    int currGasLevel; //current gas level of a fuel tank
}; //do not forget ;
#endif
