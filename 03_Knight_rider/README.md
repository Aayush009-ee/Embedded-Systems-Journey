# Project 03: Knight Rider Effect

## Objective
Create a scanning LED effect inspired by the Knight Rider TV series using three LEDs and an Arduino Uno.

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

The LEDs turn on one at a time and move from left to right and then back from right to left.

Pattern:

LED1 → LED2 → LED3 → LED2 → LED1 → Repeat

Visual Representation:

● ○ ○

○ ● ○

○ ○ ●

○ ● ○

● ○ ○

## Concepts Used

- GPIO Output Control
- pinMode()
- digitalWrite()
- delay()
- Program Flow
- Sequential Execution
- State-Based Logic

## Challenges Faced

- Understanding the difference between a running pattern and Knight Rider effect
- Managing LED states correctly
- Ensuring only one LED is ON at a time
- Debugging wiring and code logic

## What I Learned

- How to control multiple GPIO pins
- How to create bidirectional LED patterns
- How state transitions work in embedded systems
- How to debug hardware and software issues
- How timing affects visual effects

## Applications

The same concept is used in:
- Signal indicators
- Robot status displays
- Industrial machine indicators
- Embedded user interfaces
- Decorative LED effects

## Future Improvements

- Use 5–10 LEDs for a smoother effect
- Control speed using a potentiometer
- Implement using arrays and loops
- Create a fading effect using PWM
