#include <Arduino.h>

const int analog_pin = A0;
const int led_pin = 9;

void setup(){
    
}

void loop(){

    int pot_value = analogRead(analog_pin);
    int brightness = map(pot_value,0,1023,0,255);
    analogWrite(led_pin,brightness);
}
