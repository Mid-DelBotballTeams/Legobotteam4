#include <kipr/botball.h>

int main()
{
    enable_servos();  //Enable (turn on) all servo ports.
    
    set_servo_position(1,1153); //Set servo on port #2 to position 1153.
    
    motor(0,85);
    motor(2,100);  
    msleep(3000);
    
    motor(0,85);
    motor(2,100);    
    msleep(2500);   
    
    motor(0,0);
    motor(2,50);
    msleep(2000);
    
    disable_servos();   // Disable (turn off) all servo ports.

    return 0;
} 
                   