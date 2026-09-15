#include <Arduino.h>

const int buzzer = 8;
const int button = 12;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == LOW) {
    tone(buzzer, 8000);
  }
  else {
    noTone(buzzer);
  }
}
