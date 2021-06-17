#include "Hare.h"
#include <cstdlib> //rand

Hare::Hare() : length(10)
{
    //length = 10;
    pattern = new int[length]; //dynamically allocated 10-ints
    int defaultPattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    for (int i = 0; i < length; i++)
        pattern[i] = defaultPattern[i];

    position = 0;
}

Hare::Hare(int* pattern, int size, int position) : 
    length(size > 0 ? size : 10)
{
    //Can we write
    //this->pattern = pattern; //NO.
    //Reason: suppose we use this->pattern = pattern;
    //this->pattern and pattern point to the same address,
    //which is this->pattern is an alias of pattern,
    //Then when the content of pattern is changed,
    //the content of this->pattern is also changed.
    //This voilates encapsulation of object oriented design,
    //where data member can only be changed through
    //given interface. In this example,
    //we cannot change data member this->pattern
    //without using the corresponding member function.
    //In our Hare class, for simplicity,
    //once we set the pattern in constructor,
    //we do not provide function members to update pattern,
    //for simplicity.

    //this->pattern = new int[this->length];//OK
    (*this).pattern = new int[length]; //OK as well
    //since data member length does not have the same
    //name as given parameter size, we can omit
    //this->length before length since in this constructor,
    //length just means data member,
    //there is no confusion with given parameter size.

    if (size > 0)
       for (int i = 0; i < size; i++)
           this->pattern[i] = pattern[i];
    else //size <= 0
    {
        int defaultPattern[] = 
            {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
        for (int i = 0; i < length; i++)
            this->pattern[i] = defaultPattern[i]; 
            //ADD this-> before pattern[i]
    }

    this->position = position; 
}

Hare::~Hare()
{
    delete[] pattern;
    pattern = 0; //set pattern to be nullptr
}

//TODO: implement other member functions of Hare class
int Hare::getPosition() const
{
    return position; 
}

int* Hare::getPattern() const
{
    return pattern;
}

int Hare::getPatternLength() const
{
    return length;
}

void Hare::setPosition(int newPosition)
{
    position = newPosition;
}

void Hare::move()
{
    int index = rand() % length;
    int stepsToMove = pattern[index];
    position += stepsToMove;
    //warning: cannot write
    //int position += stepsToMove;
    //otherwise, the int declaration before position
    //means position is a local variable,
    //so position is not data member position now.
}
