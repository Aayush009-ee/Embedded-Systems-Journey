# Project 01: LED Blink

## Objective
Blink an LED connected to Arduino Uno R3.

## Components Used
- Arduino Uno R3
- LED
- 1.6 kΩ resistor
- Breadboard
- Jumper wires

## Connections
D13 → Resistor → LED → GND

## Concepts Learned
- GPIO
- pinMode()
- digitalWrite()
- delay()
- HIGH and LOW logic levels
- Infinite loops

## Challenges Faced
- CH340 driver was missing.
- Upload errors occurred.
- External LED initially did not glow.

## Solutions
- Installed CH340 driver.
- Fixed PlatformIO configuration.
- Corrected LED wiring.

## Future Improvements
- Adjustable blink speed
- Multiple LEDs
- Button-controlled blinking
