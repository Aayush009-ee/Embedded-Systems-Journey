#include <Arduino.h>

const int push_button = 12;
const int buzzpin = 13;

bool currentState = HIGH;
bool previousState = HIGH ;
bool buzzState = LOW;

void setup() {

    pinMode(push_button ,INPUT);
    pinMode(buzzpin,OUTPUT);
    digitalWrite(buzzpin,LOW);
}

void loop() {

    currentState = digitalRead(push_button);
    if(currentState == LOW &&  previousState == HIGH){
        buzzState = !buzzState;        
        digitalWrite(buzzpin,buzzState);
        delay(50);
    }

    previousState = currentState;
}
