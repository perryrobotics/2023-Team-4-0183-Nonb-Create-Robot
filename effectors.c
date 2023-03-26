#include <kipr/wombat.h>
#include "constants.h"


void move_servo_slowly(int port, int end_position, int delay)
{
    int current_position;
    int pos;
    
    current_position = get_servo_position(port);
    
    if (current_position < end_position) //counting up!
    {
        for(pos=current_position;pos<end_position;pos+=5)
        {
            set_servo_position(port, pos);
            msleep(delay);
        }
    }
    else
    {
        for(pos=current_position;pos > end_position;pos-=5)
        {
            set_servo_position(port, pos);
            msleep(delay);
        }
    }
    
    set_servo_position(port, end_position);
    msleep(50);
}
     
void open_claw()
{
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(500);
}

void close_claw()
{
    set_servo_position(CLAW, CLAW_CLOSE);
    msleep(500);
}

            
void start_arm()
{
    set_servo_position(ARM, ARM_START);
    msleep(500);
}

void start_clamp()
{
    set_servo_position(CLAMP, CLAMP_START);
    msleep(500);
}
                       
void get_wireshark()
{
    set_servo_position(CLAMP, WIRESHARK);
    msleep(500);
}