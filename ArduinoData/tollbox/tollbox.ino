#include <Servo.h>
Servo motor;
int p=0;
void setup(){
  motor.attach(9);
  motor.write(180);
}
void loop(){
  for(p=0;p<100;p++)
  {
    motor.write(p);
    delay(10);
    
  }
  for(p=180;p>=1;p--)
  {
    motor.write(p);
    delay(10);
  }
}
