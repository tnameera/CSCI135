#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;


// Define WaterLevel class with data members

// (1) an array of integers representing the levels of water at different times, call it levels, and
// (2) the size of that array, call it size.
// Public interface includes:
// (1) Non default constructor WaterLevel, with two given parameters, one is an array of integers, 
//the other is the size of that array. If given parameter size is negative, then set data member levels 
//to be {10, 25, 36} 
//and data member size to be 3, otherwise, use the parameters to set the corresponding data members.
// (2) Destructor.
// (3) A method high which takes an integer presenting a given threshold, return the number of 
//levels that is bigger than this threshold.
// Your tasks is to declare class WaterLevel and implement constructors and methods in 
//public interface. For simplicity, you can combine declaration and implementation in one source code.
// (a) If you can type, submit .cpp file. Please do not submit .docx or .pdf file.
// (b) If you cannot type, then submit an image or a .pdf is fine.


class WaterLevel{

    public:
        WaterLevel(int* , int);
        ~WaterLevel();
        int high(int threshold) const;

    private:
        int size;
        int* levels = new int[size];

};

//implement constructors

WaterLevel::WaterLevel(int* levels , int size){

//If given parameter size is negative, then set data member levels 
//to be {10, 25, 36} 
//and data member size to be 3, otherwise, use the parameters to set the corresponding data members.
    if (size < 0)
    {
        this->levels = {10, 25, 36};
        this->size = 3; 
    }

    else 
    {   
        this->levels = levels;
        this->size = size; 

    }

}


WaterLevel::~WaterLevel()
{
    delete[] levels;
    levels = 0;

}

int WaterLevel::high(int threshold) const
{
    //A method high which takes an integer presenting a given threshold, return the number of 
    //levels that is bigger than this threshold.

    int high = 0;

    for(int i = 0; i < size; i++)
    {
        if (levels[i] > threshold)
        {
            high++;
        }
    }
    return high;
    
}







int main()
{


    return 0;
}


