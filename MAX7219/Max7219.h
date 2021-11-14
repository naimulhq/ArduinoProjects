/*
  Max7219.h - Library for communicating with MAX7219 Device
  Created by Naimul Hoque
  Updated on 11/14/2021
  Released into the public domain.
*/


#ifndef MAX7219_H
#define MAX7219_H


class Max7219{

private:
    int CLK_PIN;
    int DIN_PIN;
    int CS_PIN;
    int SHIFT_REGISTERS;
public:
    Max7219();
    Max7219(int,int,int,int);
    void setCLKPin(int);
    void setDINPin(int);
    void setCSPin(int);
    void setTotalShiftRegisters(int);
    void displayTest(int);
    void initializePins(void);
};

#endif
