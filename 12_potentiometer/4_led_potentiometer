# Potentiometer Controlled 4-LED Brightness Indicator

## Objective

To control four LEDs using a 10 kΩ potentiometer, where each LED represents a different range of the potentiometer and gradually increases in brightness within that range.

## Components

- Arduino Uno
- 10 kΩ Potentiometer
- 4 LEDs
- 4 × 1 kΩ Resistors
- Breadboard
- Jumper Wires

## Connections

### Potentiometer

- Outer terminal → 5V
- Middle terminal (Wiper) → A0
- Other outer terminal → GND

### LEDs

- Red LED → D11 through 1 kΩ resistor
- Yellow LED → D10 through 1 kΩ resistor
- Green LED → D9 through 1 kΩ resistor
- Blue LED → D8 through 1 kΩ resistor
- All LED cathodes → GND

## Working

The potentiometer provides an analog value from **0–1023**.

The range is divided into four sections:

| Potentiometer Value | LED |
|---|---|
| 0–300 | Red |
| 301–600 | Yellow |
| 601–900 | Green |
| 901–1023 | Blue |

Within each range, the selected LED gradually increases in brightness from **0 to 255** using PWM.

For example:

```text
Yellow range:

300 → 0 brightness
450 → ~128 brightness
600 → 255 brightness
