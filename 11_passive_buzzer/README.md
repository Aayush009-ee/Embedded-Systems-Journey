# Passive Buzzer Melody

## Objective
To control a passive buzzer using an Arduino and generate different sound frequencies.

## Components Required
- Arduino Uno
- TMB12A05 Passive Buzzer
- Jumper Wires
- Breadboard

## Connections

| Component | Arduino |
|---|---|
| Buzzer `+` | Digital Pin 8 |
| Buzzer `-` | GND |

## Working Principle
Unlike an active buzzer, a passive buzzer does not have an internal oscillator to generate a fixed tone. The Arduino generates an electrical signal at a particular frequency, causing the piezoelectric element inside the buzzer to vibrate and produce sound.

Higher frequency → Higher pitch  
Lower frequency → Lower pitch

## New Concepts Learned
- Passive vs. active buzzer
- Frequency and pitch
- Time period
- Relationship between frequency and time period:
  
  T = 1/f

- `tone()` function
- `noTone()` function
- Generating different frequencies using Arduino

## Arduino Functions Used

`tone(pin, frequency);`

Generates a tone of the specified frequency.

`noTone(pin);`

Stops the tone.

## Result
The Arduino successfully generated an audible tone using the TMB12A05 passive buzzer. Changing the frequency changes the pitch of the sound.

## Future Improvement
Use multiple frequencies and different durations to create a melody.
