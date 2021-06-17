#include "Counter.hpp"

void Counter::reset()
{
   value = 0;
}

void Counter::count()
{
    value++;
}

int Counter::get_value() const
{
    return value;
}

void Counter::undo()
{
    if (value > 0)
       value--;
}
