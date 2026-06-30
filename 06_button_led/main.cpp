#include <Arduino.h>

const int buttonPin = 12;
const int ledPin = 13;

void setup()
{
    pinMode(buttonPin, INPUT_PULLUP);  // Enable internal pull-up resistor
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    if (digitalRead(buttonPin) == LOW)   // Button pressed
    {
        digitalWrite(ledPin, HIGH);
    }
    else                                 // Button released
    {
        digitalWrite(ledPin, LOW);
    }
}
