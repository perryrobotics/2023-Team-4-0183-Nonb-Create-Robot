#include <kipr/wombat.h>
#include "constants.h"

void forward_to_black(int speed, int port)
{
    mav(LM, speed);
    mav(RM, speed);
    
    while ( analog(port) < BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void backward_to_black(int speed, int port)
{
    mav(LM, -speed);
    mav(RM, -speed);
    
    while ( analog(port) < BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void right_to_black(int speed, int port)
{
    mav(LM, speed);
    mav(RM, -speed);
    
    while ( analog(port) < BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void left_to_black(int speed, int port)
{
    mav(LM, -speed);
    mav(RM, speed);
    
    while ( analog(port) < BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void right_to_white(int speed, int port)
{
    mav(LM, speed);
    mav(RM, -speed);
    
    while ( analog(port) > BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void left_to_white(int speed, int port)
{
    mav(LM, -speed);
    mav(RM, speed);
    
    while ( analog(port) > BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void forward_to_white(int speed, int port)
{
    mav(LM, speed);
    mav(RM, speed);
    
    while ( analog(port) > BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void backward_to_white(int speed, int port)
{
    mav(LM, -speed);
    mav(RM, -speed);
    
    while ( analog(port) > BLACK)
    {
    }
    
    mav(LM, 0);
    mav(RM, 0);
}

void line_follow_to_black(int speed)
{
    
    while ( (analog(LEFT_LINE)< BLACK) || (analog(RIGHT_LINE) < BLACK) )
    {
        if( analog(LEFT_LINE) > BLACK)
        {
            mav(LM, speed-100);
            mav(RM, speed+100);
        }
        else if ( analog(RIGHT_LINE) > BLACK)
        {
			mav(LM, speed+100);
            mav(RM, speed-100);
        }
        else
        {
            mav(LM, speed);
            mav(RM, speed);
        }
    }// END WHILE
    mav(LM, 0);
    mav(RM, 0);
}
    
void line_follow_ticks(int speed, int ticks)
{
    cmpc(LM);
    cmpc(RM);
    
    while ( gmpc(LM) < ticks )
    {
        if( analog(LEFT_LINE) > BLACK)
        {
            mav(LM, speed-150);
            mav(RM, speed+150);
        }
        else if ( analog(RIGHT_LINE) > BLACK)
        {
			mav(LM, speed+150);
            mav(RM, speed-150);
        }
        else
        {
            mav(LM, speed);
            mav(RM, speed);
        }
    }// END WHILE
    mav(LM, 0);
    mav(RM, 0);
}
    
            
        
















        















