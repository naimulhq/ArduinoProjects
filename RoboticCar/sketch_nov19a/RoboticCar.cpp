#include "Arduino.h"
#include "RoboticCar.h"
#include "Motor.h"

elegoo::RoboticCar::RoboticCar(){
    left_motor = new Motor(5,7);
    right_motor = new Motor(6,8);
}

elegoo::RoboticCar::RoboticCar(int pwm_pin_left, int in_pin_left, int pwm_pin_right, int in_pin_right, int _standby_pin){
    left_motor = new Motor(pwm_pin_left,in_pin_left);
    right_motor = new Motor(pwm_pin_right,in_pin_right);
    this->_standby_pin = _standby_pin;
    pinMode(_standby_pin,OUTPUT);
}

elegoo::RoboticCar::~RoboticCar(){

}

void elegoo::RoboticCar::turnLeft(){
    left_motor->rotateCounterClockwise();
    right_motor->rotateClockwise();
}

void elegoo::RoboticCar::turnRight(){
    left_motor->rotateClockwise();
    right_motor->rotateCounterClockwise();
}

void elegoo::RoboticCar::goForward(){
    left_motor->rotateClockwise();
    right_motor->rotateClockwise();
}

void elegoo::RoboticCar::goReverse(){
    left_motor->rotateCounterClockwise();
    right_motor->rotateCounterClockwise();
}

void elegoo::RoboticCar::stopRoboticCar(){
    digitalWrite(_standby_pin,LOW);
}

void elegoo::RoboticCar::startRoboticCar(){
    digitalWrite(_standby_pin,HIGH);
}

void elegoo::RoboticCar::setCarSpeed(int speed){
    left_motor->setSpeed(speed);
    right_motor->setSpeed(speed);
}
