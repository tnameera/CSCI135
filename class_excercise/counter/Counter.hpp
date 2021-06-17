#ifndef _COUNTER_H
#define _COUNTER_H
class Counter 
{
public:
 void reset();
 void count();
 void undo();
 int get_value() const;
private:
 int value;
};

#endif
