#ifndef ROBOTIC_CAR_H
#define ROBOTIC_CAR_H
#include "Motor.h"

namespace elegoo{

    typedef elegoo::Motor Motor;

    class RoboticCar{
        private:
            Motor *left_motor;
            Motor *right_motor;
            int _standby_pin; // Used for stopping and starting the motors.
        public:
            RoboticCar();
            RoboticCar(int,int,int,int,int);
            virtual ~RoboticCar();
            void turnLeft();
            void turnRight();
            void goForward();
            void goReverse();
            void startRoboticCar();
            void stopRoboticCar();
            void setCarSpeed(int);

    };
}

#endif
