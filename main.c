#include <kipr/botball.h>

int main()
{
    shut_down_in(118);
    enable_servos();
    motor(0,100);
    motor(1,100);
    msleep(1400);
    //time for 10in
  	ao();
    return 0;
    
}
