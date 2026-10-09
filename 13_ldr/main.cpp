#include <Arduino.h>

const int ldr_pin = A0;
const int led_pin = 9;

void setup() {
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldr_value = analogRead(ldr_pin);

  // Darkness = brighter LED
  int brightness = map(ldr_value, 0, 120, 255, 0);

  // Keep brightness within the valid PWM range
  brightness = constrain(brightness, 0, 255);

  analogWrite(led_pin, brightness);

  Serial.println(ldr_value);
  delay(100);
}
