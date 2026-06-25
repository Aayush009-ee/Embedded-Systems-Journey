# Project 05: Traffic Light Controller

## Objective

Simulate a real-world traffic light system using three LEDs and an Arduino Uno.

## Components Used

- Arduino Uno R3
- 1 Red LED
- 1 Yellow LED
- 1 Green LED
- 3 Resistors (220 Ω – 1.6 kΩ)
- Breadboard
- Jumper Wires

## Connections

D13 → Red LED (+) → Resistor → GND

D12 → Yellow LED (+) → Resistor → GND

D11 → Green LED (+) → Resistor → GND

## Working Principle

The Arduino cycles through the standard traffic light sequence:

1. Red ON
2. Red + Yellow ON
3. Green ON
4. Yellow ON
5. Repeat

## State Table

| State | Red | Yellow | Green |
|---------|---------|---------|---------|
| Red | ON | OFF | OFF |
| Red + Yellow | ON | ON | OFF |
| Green | OFF | OFF | ON |
| Yellow | OFF | ON | OFF |

## Visual Representation

🔴

↓

🔴🟡

↓

🟢

↓

🟡

↓

🔴

## Concepts Used

- GPIO Output Control
- pinMode()
- digitalWrite()
- delay()
- State Machines
- Sequential Logic
- Embedded Control Systems

## Challenges Faced

- Determining the traffic light sequence
- Managing multiple LEDs simultaneously
- Choosing appropriate delays
- Understanding state transitions

## What I Learned

- How real-world systems can be modeled using states
- How multiple outputs can work together
- How timing affects system behavior
- Basics of finite state machines

## Applications

- Traffic Signal Controllers
- Industrial Automation
- Elevator Controllers
- Washing Machines
- Robot Control Systems
- Embedded User Interfaces

## Future Improvements

- Add a pedestrian crossing button
- Add a countdown display
- Use interrupts for button presses
- Implement non-blocking timing using millis()
- Simulate a four-way intersection

## Project Outcome

Successfully created a traffic light controller that cycles through realistic traffic signal states using three LEDs and an Arduino Uno.
