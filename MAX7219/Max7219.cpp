#include "Arduino.h"
#include "Max7219.h"
using namespace std;


Max7219::Max7219(){
    CLK_PIN = 10;
    CS_PIN = 11;
    DIN_PIN = 12;
}

Max7219::Max7219(int CLK_PIN, int CS_PIN, int DIN_PIN, int SHIFT_REGISTERS){
    this->CLK_PIN = CLK_PIN;
    this->CS_PIN = CS_PIN;
    this->DIN_PIN = DIN_PIN;
    this->SHIFT_REGISTERS = SHIFT_REGISTERS;
    this->initializePins();
}


void Max7219::setCLKPin(int CLK_PIN){
    this->CLK_PIN = CLK_PIN;
}
void Max7219::setDINPin(int DIN_PIN){
    this->DIN_PIN = DIN_PIN;
}
void Max7219::setCSPin(int CS_PIN){
    this->CS_PIN = CS_PIN;
}
void Max7219::setTotalShiftRegisters(int SHIFT_REGISTERS){
    this->SHIFT_REGISTERS = SHIFT_REGISTERS;
}

void Max7219::initializePins(void){
    pinMode(CLK_PIN,OUTPUT);
    pinMode(DIN_PIN,OUTPUT);
    pinMode(CS_PIN,OUTPUT);
}
