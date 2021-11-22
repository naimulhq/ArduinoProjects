/*

Author: Naimul Hoque
Updated: 11/21/2021
Description: Motor.cpp for Motor Class based off of TB6612FNG Chip

*/

#include "Arduino.h"
#include "Motor.h"

elegoo::Motor::Motor(){
    _pwm_pin = 5;
    _in_pin = 7;
    this->initializePins();
}

elegoo::Motor::Motor(int _pwm_pin, int _in_pin){
    this->_pwm_pin = _pwm_pin;
    this->_in_pin = _in_pin
    this->initializePins();
}

elegoo::Motor::~Motor(){

}

void elegoo::Motor::initializePins(void){
    pinMode(_pwm_pin,OUTPUT);
    pinMode(_in_pin,OUTPUT);
}

void elegoo::Motor::rotateClockwise(void){
    digitalWrite(_in_pin,HIGH);
}

void elegoo::Motor::rotateCounterClockwise(void){
    digitalWrite(_in_pin,LOW);
}

// Nov 21 2021, Exception will be implemented if speed is invalid
void elegoo::Motor::setSpeed(int speed){
    if(speed < 0 || speed > 255){
        std::cout << "Invalid Speed";
    }else{
        analogWrite(_pwm_pin,speed);
    }   
}