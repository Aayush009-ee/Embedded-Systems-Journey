#include <Arduino.h>

const int buzzer = 8;

void setup() {

    tone(buzzer, 10000);   // Generate 1000 Hz tone
    delay(5000);           // Play for 0.5 seconds

    noTone(buzzer);       // Stop the tone
}

void loop() {
    tone(buzzer, 1047);  
    delay(5000); 
    tone(buzzer, 1319);   
    delay(5000);   
    tone(buzzer, 1568);  
    delay(5000);   
    tone(buzzer, 1319);   
    delay(5000);   
    tone(buzzer, 1047);   
    delay(5000);   
    tone(buzzer, 1568);   
    delay(5000);   
    tone(buzzer, 2093);   
    delay(5000);     
}
