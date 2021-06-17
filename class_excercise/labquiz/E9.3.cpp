/*
Author: Syeda Nameera Tahseen
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.3

Simulate a circuit for controlling a hallway light that has switches at both ends of the hallway. Each switch can be up or down, and the light can be on or off. Toggling either switch turns the lamp on or off. Provide member functions

int get_first_switch_state() // 0 for down, 1 for up
int get_second_switch_state()
int get_lamp_state() // 0 for off, 1 for on
void toggle_first_switch()
void toggle_second_switch()
*/

#include <iostream>
//program given my tong yi
class Circuit {
public:
    //TODO: define default constrctor,
    //where data member first_switch, second_switch,
    //and lamp_state are all set to be zero.

    Circuit()
    {
        first_switch = 0;
        second_switch = 0;
        lamp_state = 0;
    }
   
    //TODO: return value of data member first_switch.
    int get_first_switch_state() const
    {
        return first_switch;
    }
   
    //TODO: return value of data member second_switch.
    int get_second_switch_state() const
    {
        return second_switch;
    }
   
    //TODO: return value of data member lamp_state.
    int get_lamp_state() const
    {
        return lamp_state;
    }

    //TODO: when first switch is toggled,
    //value of first_switch is changed 
    //(from 0 to 1, or from 1 to 0).
    //Also, the state of lamp is also changed
    //(from 0 to 1, or from 1 to 0).
    //Hint: you can use if-else statement,
    //but a simpler way is to use NOT operator !.
    //That is, !0 is 1 and !1 is 0.
    void toggle_first_switch()
    {   
        if (get_first_switch_state()==1){
            first_switch = 0;
            if(second_switch == 1)
            {
                lamp_state = 1;
            }
            else
            {
                lamp_state = 0;
            }
        }
        else
        {
            first_switch = 1;
            if(second_switch == 0)
            {
                lamp_state = 1;
            }
            else
            {
                lamp_state = 0;
            }
        }
    }
   
    //TODO: code is similar to that of toggle_first_switch.
    void toggle_second_switch()
    {
        if(get_second_switch_state()==1)
        {
            second_switch = 0;
            if(first_switch == 1)
            {
                lamp_state = 1;
            }
            else
            {
                lamp_state = 0;
            }
        }
        else
        {
            second_switch = 1;
            if(first_switch == 0)
            {
                lamp_state = 1;
            }
            else
            {
                lamp_state = 0;
            }
        }
    }

private:
    int first_switch = 0;
    //TODO: Declare data member first_switch, which is an int.  
    
    int second_switch = 0;
    //TODO: Declare data member second_switch, which is an int.  
    
    int lamp_state = 0;
    //TODO: Declare data member lamp_state, which is an int.  
    
}; //do not omit ; in class declaration.

int main()
{
    return 0;
}