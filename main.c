#include <kipr/wombat.h>
#include "movement.h"
#include "constants.h"
#include "sensors.h"
#include "effectors.h"

int main()
{
    printf("Hello World\n");
    //wait_for_light(START);
    shut_down_in(119);
    enable_servos();
    set_servo_position(0, 0);
    start_arm();
    start_clamp();
    forward(1000, 600);
    right_to_black(500, LEFT_LINE);
    right_to_black(500, RIGHT_LINE);
    left(500,500);
    forward(1500, 7000);
    get_wireshark();      //got wireshark
    left(500, 1000);
    forward(1500, 1000);
    left(700, 800);
    forward_to_black(1500, LEFT_LINE);
    left_to_black(500, RIGHT_LINE);
	forward(1500, 10000);    
    backward(1500, 100);
    left(1500, 1000);
    backward(1500, 2500);
    forward_to_black(1500, RIGHT_LINE);
    forward_to_black(1500, LEFT_LINE);
    right(200, 700);
    forward(1000, 700);
    //deliver wireshark
    msleep(1000);
    start_clamp();
    backward(1000, 3000);
    left(1500, 1750);
    forward_to_black(1500, RIGHT_LINE);
    forward_to_black(1500, LEFT_LINE);
    forward(1500,10000);
    backward(1500, 100);
    right(1500, 1000);
    backward(1500, 2000);
    forward_to_black(1500, RIGHT_LINE);
    forward_to_black(1500, LEFT_LINE);
    forward(1500, 1000);
    right_to_black(500, LEFT_LINE);
	line_follow_ticks(500, 10000);
	left(1000, 600);
    forward(1000, 1000);
    backward(1000, 1000);
    right_to_black(1000, LEFT_LINE);
    line_follow_ticks(800, 6400);
    get_wireshark();      //got wireshark
    backward(1000, 6000);
	left(1000, 1000);
	start_clamp();
    

    return 0;
}
