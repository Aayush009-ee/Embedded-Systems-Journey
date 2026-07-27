#include <Arduino.h>

const int buttonPin = 13;
const int ledPin = 12;

bool ledState = LOW;
bool lastbuttonstate = HIGH;



void setup(){

    pinMode(buttonPin , INPUT);
    pinMode(ledPin,OUTPUT);
}

void loop(){

    bool currentbuttonstate = digitalRead(buttonPin);

    if(currentbuttonstate == LOW && lastbuttonstate == HIGH)
    {
        ledState = !ledState;
        digitalWrite(ledPin, ledState);

        delay(50);
    }

    lastbuttonstate = currentbuttonstate;
}





    
