#include "mbed.h"

#include "myOpto.h"

DigitalOut blueLED(LED1);
InterruptIn blueButton(BUTTON1);
DigitalOut leftMotor(D6);
DigitalOut rightMotor(D5);
DigitalIn optoLeft(D0);
DigitalIn optoRight(D1);

void exampleFunc(void);
void rightFunc(void);
void leftFunc(void);

//Objects
//Opto farLeft(D0, exampleFunc);
//Opto farRight(D1, rightFunc);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        if(optoRight == 0){
            rightMotor.write(1);
        }else{
            rightMotor.write(0);
        }

        if(optoLeft == 0){
            leftMotor.write(1);
        }else{
            leftMotor.write(0);
        }


    }
}


// Functions
void leftFunc(void){
    leftMotor.write(1);
}

void rightFunc(void){
    rightMotor.write(1);
}

