# LED Toggle Using Push Button | Arduino Uno

A beginner-friendly Arduino project that demonstrates how to toggle an LED using a push button. Each time the button is pressed, the LED changes its state—if it is OFF, it turns ON; if it is ON, it turns OFF.

This project introduces digital inputs, outputs, edge detection, and the use of the Arduino's internal pull-up resistor.

---

## Features

- Toggle an LED with a single button
- LED retains its state after the button is released
- Uses the Arduino's internal pull-up resistor (`INPUT_PULLUP`)
- Simple and beginner-friendly implementation

---

## Components Required

- Arduino Uno
- 1 × LED
- 1 × 220 Ω or 1 kΩ resistor
- 1 × Push button
- Breadboard
- Jumper wires

---

## Circuit Connections

### LED

| Component | Arduino Pin |
|----------|-------------|
| LED Anode (+) | Digital Pin 12 |
| LED Cathode (−) | Resistor → GND |

### Push Button

| Component | Arduino Pin |
|----------|-------------|
| One Terminal | Digital Pin 13 |
| Other Terminal | GND |

> The button is configured using `INPUT_PULLUP`, so no external pull-up resistor is required.

---

## Working

When the Arduino starts, the button pin is configured as an input with the internal pull-up resistor enabled.

- Button Released → HIGH
- Button Pressed → LOW

Whenever a valid button press is detected, the Arduino changes the LED's current state.

Sequence:

1. Press button → LED ON
2. Press button again → LED OFF
3. Repeat

---

## Concepts Learned

- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `INPUT_PULLUP`
- Boolean variables
- Button state detection
- Toggle logic
- Conditional statements (`if`)

---

## Applications

- Home automation switches
- Robot mode selection
- Industrial control panels
- Menu navigation systems
- Embedded control interfaces

---

## Future Improvements

- Add software debouncing
- Control multiple LEDs
- Save LED state in EEPROM
- Replace delay-based logic with `millis()`
- Add Bluetooth control using an HC-05 module

---

## Repository Structure

```
LED-Toggle-Using-Push-Button/
│── LED_Toggle.ino
│── README.md
```

---

## Author

**Aayush**  
Electrical Engineering Student  
Learning Embedded Systems, Arduino, and Robotics
