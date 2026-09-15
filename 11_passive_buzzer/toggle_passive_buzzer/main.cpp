#include <Arduino.h>

const int buzzer = 8;
const int button = 12;
int currentState;
int previousState = HIGH;
int buzzerState = LOW ;


void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
    if(buzzerState == HIGH){
        tone(buzzer,8000);
    }
    currentState = digitalRead(button);
    if (currentState == LOW && previousState == HIGH) {
         tone(buzzer, 8000);
        buzzerState = !buzzerState;;
    }
    else{
        noTone(buzzer);
    }
    previousState = currentState;
}
