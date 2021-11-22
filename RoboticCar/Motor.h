/*

Author: Naimul Hoque
Updated: 11/21/2021
Description: Motor Class for Elegoo Smart-Car Shield V1.1 based off of TB6612FNG Chip

*/
#ifndef MOTOR_H
#define MOTOR_H

namespace elegoo{

    class Motor{
        private:
            int _pwm_pin;
            int _in_pin;
        public:
            Motor();
            Motor(int,int);
            virtual ~Motor();
            void initializePins(void);
            void rotateClockwise(void);
            void rotateCounterClockwise(void);
            void setSpeed(int);
    } 

}

#endif