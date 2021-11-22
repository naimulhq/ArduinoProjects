#include "Motor.h"

typedef elegoo::Motor Motor;
Motor left_motor(5,7);
Motor right_motor(6,8);

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // 7 = AIN1, 8 = BIN1, 3 = STBY
  digitalWrite(3,HIGH);
  left_motor.setSpeed(100);
  left_motor.rotateClockwise();
  right_motor.setSpeed(100);
  right_motor.rotateClockwise();
  
  delay(10000);
  
 
}
