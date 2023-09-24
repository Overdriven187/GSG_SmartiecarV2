#include "C:\Users\WRO_FE2\Desktop\GSG_SmartiecarV2\src\ino\smartiecar_libs\DCmotor.h"
#include "C:\Users\WRO_FE2\Desktop\GSG_SmartiecarV2\src\ino\smartiecar_libs\steering.h"
#include <Servo.h>

int Button = 4;

//setup dcmotor and servo in the void setup() and drive straight
void setup() 
{
    //Button setup
    pinMode(Button, INPUT);

    //servo setup
    servosetup();

    //pinmodes from motor
    motorsetup();

    //wait for button
    while (digitalRead(Button) == LOW) 
    {
      delay(50);
    }

    //drive straight
    runMotor(160);

}

//empty loop because everything is done is the setup
void loop()
{

}