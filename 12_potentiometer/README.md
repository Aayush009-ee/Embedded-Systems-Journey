# Potentiometer Controlled LED Brightness

## Objective

To control the brightness of an LED using a 10 kΩ potentiometer and understand analog input and PWM output.

## Components Used

- Arduino Uno
- 10 kΩ Potentiometer
- LED
- 1 kΩ Resistor
- Breadboard
- Jumper Wires

## Connections

### Potentiometer

- Outer terminal → 5V
- Middle terminal (Wiper) → A0
- Other outer terminal → GND

### LED

- Arduino D9 → 1 kΩ Resistor → LED Anode (+)
- LED Cathode (-) → GND

## Working

The potentiometer works as a variable voltage divider.

When its outer terminals are connected to 5V and GND, the middle terminal provides a variable voltage between approximately 0V and 5V.

Arduino reads this voltage using `analogRead()`, which produces a value from 0 to 1023.

The LED brightness is controlled using PWM through `analogWrite()`, which uses values from 0 to 255.

Therefore, the potentiometer value is converted from the range 0–1023 to 0–255 using the `map()` function.

## Program Logic

Potentiometer
↓
`analogRead()`
↓
Value: 0–1023
↓
`map()`
↓
Value: 0–255
↓
`analogWrite()`
↓
LED Brightness

## Important Functions

### `analogRead()`

Reads the voltage at an analog pin and returns a value between 0 and 1023.

### `map()`

Converts a value from one range to another.

Example:

```cpp
map(potValue, 0, 1023, 0, 255);
