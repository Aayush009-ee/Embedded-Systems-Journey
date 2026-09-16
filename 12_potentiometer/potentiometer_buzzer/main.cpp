#include <Arduino.h>

const int buzzpin = 8;
const int analog_pin = A0;


void setup(){
    pinMode(buzzpin,OUTPUT);
    pinMode(analog_pin,INPUT);
}

void loop(){
    int pot_value = analogRead(analog_pin);
    int sound = map(pot_value,0,1023,1000,8000);
    tone(buzzpin,sound);
}
