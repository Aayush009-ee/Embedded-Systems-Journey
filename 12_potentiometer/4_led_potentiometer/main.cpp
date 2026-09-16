#include <Arduino.h>

const int led_red = 11;
const int led_yellow = 10;
const int led_green = 9;
const int led_blue = 8;

const int analog_pin = A0;

int brightness;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);

  pinMode(analog_pin, INPUT);
}

void loop() {

  int pot_value = analogRead(analog_pin);

  // Red: 0–300
  if (pot_value <= 300) {

    brightness = map(pot_value, 0, 300, 0, 255);

    analogWrite(led_red, brightness);
    analogWrite(led_yellow, 0);
    analogWrite(led_green, 0);
    analogWrite(led_blue, 0);
  }

  // Yellow: 301–600
  else if (pot_value <= 600) {

    brightness = map(pot_value, 300, 600, 0, 255);

    analogWrite(led_red, 0);
    analogWrite(led_yellow, brightness);
    analogWrite(led_green, 0);
    analogWrite(led_blue, 0);
  }

  // Green: 601–900
  else if (pot_value <= 900) {

    brightness = map(pot_value, 600, 900, 0, 255);

    analogWrite(led_red, 0);
    analogWrite(led_yellow, 0);
    analogWrite(led_green, brightness);
    analogWrite(led_blue, 0);
  }

  // Blue: 901–1023
  else {

    brightness = map(pot_value, 900, 1023, 0, 255);

    analogWrite(led_red, 0);
    analogWrite(led_yellow, 0);
    analogWrite(led_green, 0);
    analogWrite(led_blue, brightness);
  }
}
