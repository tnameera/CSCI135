#pragma once
#ifndef ROAD_H //include guard or header guard
#define ROAD_H

//Header guards are designed to ensure that the contents of a given header file are not copied, more than once,
class Road
{
public:
    Road();
    Road(int length);
    ~Road(); //destructor
    void clear();
    void mark(int pos, char ch);// modify every square of the road
    int getLastBlock() const; //modify tell me how many blocks of road
    char* toString() const;
   
private:
    char* squares;
    int length;
}; 
#endif 
