# Project 04: 3-Bit Binary Counter

## Objective

Build a binary counter using three LEDs and an Arduino Uno. The LEDs represent a 3-bit binary number and count from 0 to 7 repeatedly.

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

The three LEDs represent a 3-bit binary number.

LED Mapping:

- D13 = Bit 2 (Most Significant Bit)
- D12 = Bit 1
- D11 = Bit 0 (Least Significant Bit)

The Arduino displays the following sequence:

| Decimal | Binary | D13 | D12 | D11 |
|----------|----------|------|------|------|
| 0 | 000 | OFF | OFF | OFF |
| 1 | 001 | OFF | OFF | ON |
| 2 | 010 | OFF | ON | OFF |
| 3 | 011 | OFF | ON | ON |
| 4 | 100 | ON | OFF | OFF |
| 5 | 101 | ON | OFF | ON |
| 6 | 110 | ON | ON | OFF |
| 7 | 111 | ON | ON | ON |

After reaching 7, the counter resets to 0 and repeats.

## Concepts Used

- Binary Numbers
- Bits and Bit Positions
- GPIO Output Control
- digitalWrite()
- pinMode()
- delay()
- Sequential Execution

## Challenges Faced

- Understanding binary counting
- Mapping LEDs to bit positions
- Making multiple LEDs glow simultaneously
- Visualizing binary numbers using LEDs

## What I Learned

- How computers represent numbers in binary
- How multiple outputs can represent a single value
- The difference between decimal and binary counting
- How embedded systems use bits to store information

## Applications

- Digital Electronics
- Embedded Systems
- Microcontrollers
- Counters and Timers
- Status Indicators
- Binary Displays

## Future Improvements

- Use a button to increment the counter
- Implement the counter using loops
- Implement the counter using bitwise operators
- Expand to a 4-bit or 8-bit counter
- Display the count on a 7-segment display
