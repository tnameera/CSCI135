//File name: /Users/laptopuser/Documents/courses/cs135/ch7_pointer/sect7_7_8_class/FuelTank_s21/FuelTankClient.cpp
#include "FuelTank.hpp"
#include <iostream>
using namespace std;

int main()
{
    FuelTank tank;
    tank.fillGas(5);
    cout << "current gas level: " << tank.getGasLevel() << endl;
    tank.sendGas(3);
    cout << "current gas level: " << tank.getGasLevel() << endl;
    return 0;
}
