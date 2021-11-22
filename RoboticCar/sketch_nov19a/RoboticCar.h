#ifndef ROBOTIC_CAR_H
#define ROBOTIC_CAR_H
#include "Motor.h"

typedef elegoo::Motor Motor;

class RoboticCar{
    private:
        Motor left_motor;
        Motor right_motor;
    public:
        RoboticCar();
        virtual ~RoboticCar();
        void turnLeft();
        void turnRight();
        void goForward();
        void goReverse();
        void stopRoboticCar();

};

#endif