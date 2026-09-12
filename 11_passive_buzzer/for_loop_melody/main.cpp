#include <Arduino.h>

const int buzzer = 8;
int count = 0;

void setup() {
    tone(buzzer, 10000);   // Generate 1000 Hz tone
    delay(5000);           // Play for 0.5 seconds
    noTone(buzzer);        // Stop the tone
}

void loop() {

    if (count<3) {

        for (int freq=1000; freq<=3000; freq+=500) {
            tone(buzzer,freq);
            delay(1000);
        }
        noTone(buzzer);
        count++;
    }
}
