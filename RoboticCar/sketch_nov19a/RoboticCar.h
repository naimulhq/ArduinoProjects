#ifndef ROBOTIC_CAR_H
#define ROBOTIC_CAR_H
#include "Motor.h"
#include "ServoControl.h"

namespace elegoo{

    typedef elegoo::Motor Motor;

    class RoboticCar{
        private:
            Motor *left_motor;
            Motor *right_motor;
            ServoControl *servo_motor;
            int _standby_pin; // Used for stopping and starting the motors.
        public:
            RoboticCar();
            RoboticCar(int,int,int,int,int,int);
            virtual ~RoboticCar();
            void goForward();
            void goReverse();
            void isObstructed();
            void turnLeft();
            void turnRight();
            void setCarSpeed(int);
            void startRoboticCar();
            void stopRoboticCar();
    };
}

#endif
