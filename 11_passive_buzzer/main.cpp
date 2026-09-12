#include <Arduino.h>

const int buzzer = 8;

void setup() {

    tone(buzzer, 10000);   // Generate 1000 Hz tone
    delay(5000);           // Play for 0.5 seconds

    noTone(buzzer);       // Stop the tone
}

void loop() {
    
}
