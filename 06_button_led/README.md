# Push Button Controlled LED using Arduino

## Project Overview

This project demonstrates how to control an LED using a push button with an Arduino. The button is connected to digital pin 12, and the LED is connected to digital pin 13. When the button is pressed, the Arduino reads the input signal and turns the LED on. When the button is released, the LED turns off.

This project is ideal for beginners to learn about digital inputs, digital outputs, pull-up resistors, and conditional statements in Arduino programming.

## Components Required

* Arduino Uno
* Push Button
* LED
* 220 Ω Resistor (for the LED)
* 10 kΩ Resistor (external pull-up resistor)
* Breadboard
* Jumper Wires
* USB Cable

## Circuit Connections

### LED

* LED Anode (long leg) → 220 Ω Resistor → Digital Pin 13
* LED Cathode (short leg) → GND

### Push Button

* One side of the push button → Digital Pin 12
* Same side connected to +5V through a 10 kΩ pull-up resistor
* Opposite side of the push button → GND

## Working Principle

The external pull-up resistor keeps Pin 12 at a HIGH state when the button is not pressed.

* **Button Released** → Pin 12 reads **HIGH** → LED **OFF**
* **Button Pressed** → Pin 12 is connected to **GND** and reads **LOW** → LED **ON**

The Arduino continuously checks the button state inside the `loop()` function and controls the LED accordingly.

## Concepts Learned

* Digital Input and Output
* External Pull-Up Resistor
* Push Button Operation
* LED Control
* Variables and Constants
* `pinMode()`
* `digitalRead()`
* `digitalWrite()`
* `if` and `else` Statements
* `setup()` and `loop()` Functions

## Applications

* Home Automation
* Industrial Control Panels
* Doorbell Systems
* User Input Interfaces
* Basic Embedded Systems Projects

## Future Improvements

* Toggle the LED with each button press.
* Control multiple LEDs using different buttons.
* Add a buzzer for audio feedback.
* Implement button debouncing.
* Replace the external pull-up resistor with Arduino's built-in `INPUT_PULLUP` mode.
* Control the LED brightness using PWM and additional components.
