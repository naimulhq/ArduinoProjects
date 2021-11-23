#ifndef SERVO_CONTROL_H
#define SERVO_CONTROL_H

#include "Servo.h"

namespace elegoo{
    
    class ServoControl{
        private:
            int _servo_pin;
            int _servo_speed; // Determine how long delay lasts while Servo rotates
            int _current_angle;
            Servo *servo;
        public:
            ServoControl();
            ServoControl(int,int);
            virtual ~ServoControl();
            void initializeServo();
            void setSpeed(int);
            void turnServoLeft();
            void turnServoRight();
            void turnToMiddle();
    };


}
#endif