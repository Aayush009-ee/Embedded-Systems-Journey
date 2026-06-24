# Project 02: Multi-LED Patterns

## Objective
Control multiple LEDs using an Arduino Uno and create a running light pattern.

## Components Used
- Arduino Uno R3
- 3 LEDs
- 3 Resistors (220 Ω – 1.6 kΩ)
- Breadboard
- Jumper Wires

## Connections

D13 → Resistor → LED1(+) → GND

D12 → Resistor → LED2(+) → GND

D11 → Resistor → LED3(+) → GND

## Working Principle

The Arduino turns on one LED at a time while turning the others off.

Pattern:

LED1 → LED2 → LED3 → Repeat

## Code Concepts Used

- pinMode()
- digitalWrite()
- delay()
- GPIO Output Control
- Program Flow
- Infinite Loops

## Challenges Faced

- Correct LED orientation
- Breadboard wiring
- Uploading code to Arduino
- Understanding GPIO pins

## What I Learned

- How to control multiple output pins
- How digital outputs work
- How current flows through an LED circuit
- How Arduino executes code continuously inside loop()

## Future Improvements

- Knight Rider Pattern
- Binary Counter
- Traffic Light System
- Button Controlled LEDs
