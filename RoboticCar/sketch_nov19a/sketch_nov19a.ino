#include "RoboticCar.h"

elegoo::RoboticCar Car(5,7,6,8,3);


void setup() {
  // put your setup code here, to run once:
  Car.startRoboticCar();
  Car.setCarSpeed(100);
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
 
}
