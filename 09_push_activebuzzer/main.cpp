#include <Arduino.h>

const int buzzerPin = 13;
const int switchPin = 12;

void setup() {
    pinMode(buzzerPin, OUTPUT);
    pinMode(switchPin, INPUT);
}

void loop() {

    int buttonState = digitalRead(switchPin);

    if (buttonState == HIGH) {
        digitalWrite(buzzerPin, HIGH);
    }
    else {
        digitalWrite(buzzerPin, LOW);
    }

}
