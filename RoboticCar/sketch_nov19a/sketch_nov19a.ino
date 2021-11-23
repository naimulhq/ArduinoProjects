/*

Author: Naimul Hoque
Updated: 11/21/2021
Description: Basic Sketch for Robotic Car testing

*/

#include "RoboticCar.h"

// Macros for Arduino Pins
#define pwm_pin_left_motor 5
#define in_pin_left_motor 7
#define pwm_pin_right_motor 6
#define in_pin_right_motor 8
#define standby_pin 3
#define servo_pin 10


elegoo::RoboticCar Car(pwm_pin_left_motor,in_pin_left_motor,pwm_pin_right_motor,in_pin_right_motor,standby_pin,servo_pin);


void setup() {
  // put your setup code here, to run once:
  Car.startRoboticCar();
  Car.setCarSpeed(40);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 7 = AIN1, 8 = BIN1, 3 = STBY
  
  Car.goForward();
  delay(10000);
  Car.goReverse();
  delay(10000);
  Car.turnLeft();
  delay(1000);
  Car.turnRight();
  delay(2000);
  Car.turnLeft();
  delay(1000);
  Car.stopRoboticCar();
  delay(5000);
  Car.startRoboticCar();
  Car.goForward();
  delay(2000);
  Car.stopRoboticCar();
  Car.isObstructed();
  delay(5000);
  Car.startRoboticCar();
 
}
