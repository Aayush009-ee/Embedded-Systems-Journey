# Potentiometer Controlled Buzzer Pitch

## Objective

To control the pitch (frequency) of a passive buzzer using a 10 kΩ potentiometer.

## Components

- Arduino Uno
- 10 kΩ Potentiometer
- Passive Buzzer
- Breadboard
- Jumper Wires

## Connections

### Potentiometer
- Outer terminal → 5V
- Middle terminal (Wiper) → A0
- Other outer terminal → GND

### Passive Buzzer
- Positive (+) → D8
- Negative (-) → GND

## Working

The potentiometer produces a variable voltage at its wiper. Arduino reads this voltage using `analogRead()`, giving a value from **0–1023**.

The value is then converted into a suitable frequency using `map()`. This frequency is given to the passive buzzer using `tone()`.

```text
Potentiometer
      ↓
analogRead() → 0–1023
      ↓
map() → Frequency
      ↓
tone()
      ↓
Buzzer pitch changes
