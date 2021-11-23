#include "Arduino.h"
#include "Servo.h"
#include "ServoControl.h"

elegoo::ServoControl::ServoControl(){
    _servo_pin = 10;
    _servo_speed = 10;
    this->initializeServo();
}

elegoo::ServoControl::ServoControl(int _servo_pin, int _servo_speed){
    this->_servo_pin = _servo_pin;
    this->_servo_speed = _servo_speed;
    this->initializeServo();
}

elegoo::ServoControl::~ServoControl(){

}

void elegoo::ServoControl::initializeServo(){
    pinMode(_servo_pin,OUTPUT);
    servo = new Servo();
    servo->attach(_servo_pin);
    this->turnToMiddle();
}

void elegoo::ServoControl::setSpeed(int _servo_speed){
    this->_servo_speed = _servo_speed;
}

void elegoo::ServoControl::turnServoLeft(){
    for(int i = 0; i < 90; i++){
        servo->write(i);
        delay(_servo_speed);
    }
}

void elegoo::ServoControl::turnServoRight(){

}

void elegoo::ServoControl::turnToMiddle(){
    
}
