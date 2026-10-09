# Arduino LDR Night Lamp

## Overview

This project uses an Arduino Uno and a Light Dependent Resistor (LDR) to automatically control an LED based on the surrounding light intensity. The LED becomes brighter in darkness and dims or turns off when sufficient light is detected.

## Components Required

* Arduino Uno
* Light Dependent Resistor (LDR)
* 10 kΩ resistor
* 1 kΩ resistor
* LED
* Breadboard
* Jumper wires
* USB cable

## Circuit Connections

### LDR Voltage Divider

* Arduino 5V → One terminal of the LDR
* Other LDR terminal → Arduino A0
* Arduino A0 → One terminal of the 10 kΩ resistor
* Other resistor terminal → GND

### LED

* Arduino digital pin 9 → LED anode (long leg)
* LED cathode (short leg) → 1 kΩ resistor
* Other resistor terminal → GND

## Working Principle

### 1. Light Detection

The LDR changes its resistance according to the amount of light falling on it. The voltage-divider circuit converts this resistance change into a voltage that the Arduino can measure.

### 2. Analog Reading

The Arduino's `analogRead()` function reads the voltage at pin A0 and returns a value between 0 and 1023.

### 3. Brightness Calculation

The `map()` function converts the LDR reading into a brightness value between 0 and 255. The output range is reversed so that lower sensor readings produce greater LED brightness.

### 4. Value Limiting

The `constrain()` function ensures that the calculated brightness remains between 0 and 255.

### 5. PWM Control

The `analogWrite()` function uses Pulse Width Modulation (PWM) on pin 9 to control the LED's apparent brightness.

## Arduino Code

```cpp
#include <Arduino.h>

const int ldr_pin = A0;
const int led_pin = 9;

void setup() {
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldr_value = analogRead(ldr_pin);

  int brightness = map(ldr_value, 0, 120, 255, 0);
  brightness = constrain(brightness, 0, 255);

  analogWrite(led_pin, brightness);

  Serial.println(ldr_value);
  delay(100);
}
```

## Important Functions

* `analogRead(A0)`: Reads the sensor voltage and returns a value from 0 to 1023.
* `map()`: Converts the sensor reading into a brightness command.
* `constrain()`: Limits brightness to the range 0–255.
* `analogWrite()`: Controls LED brightness using PWM.
* `Serial.println()`: Displays the sensor reading in the Serial Monitor.
* `delay(100)`: Pauses for 100 milliseconds between readings.

## What I Learned

* How an LDR works as a light sensor.
* How to build a voltage-divider circuit.
* How to read analog sensor values using Arduino.
* How to use `map()` and `constrain()` for sensor processing.
* How PWM controls LED brightness.
* How to combine a sensor and an output device to create an automatic lighting system.

## Applications

* Automatic night lamps
* Smart home lighting
* Streetlight automation
* Light-sensitive electronic systems

## Future Improvements

* Calibrate the sensor for different lighting conditions.
* Add a threshold to switch the LED fully ON or OFF.
* Control multiple LEDs based on light intensity.
* Use a transistor and a suitable power supply to control a higher-power lamp.

## Note

The mapping range `0–120` is based on the sensor readings observed during testing. Actual LDR readings depend on the sensor, resistor, circuit, and lighting conditions. Adjust the mapping range if necessary.
