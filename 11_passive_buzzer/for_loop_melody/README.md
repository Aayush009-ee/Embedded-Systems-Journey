# Passive Buzzer - Frequency Sweep

## Objective
To generate a sequence of different frequencies using a passive buzzer and control the number of times the frequency sweep repeats using a `for` loop, variable, and `if` condition.

## Components Required
- Arduino Uno
- TMB12A05 Passive Buzzer
- Breadboard
- Jumper Wires

## Connections

| Component | Arduino |
|---|---|
| Buzzer `+` | Digital Pin 8 |
| Buzzer `-` | GND |

## Working Principle
The Arduino generates different frequencies on the buzzer using the `tone()` function. The frequency is gradually increased from 1000 Hz to 3000 Hz in steps of 500 Hz.

The sequence is:

1000 Hz → 1500 Hz → 2000 Hz → 2500 Hz → 3000 Hz

A `for` loop is used to automatically increase the frequency.

## New Concepts Learned
- `for` loops
- Loop initialization, condition, and update
- Incrementing a variable
- Using a variable as the frequency in `tone()`
- Using `if` conditions to control program execution
- Using a counter variable to limit repetitions
- Difference between `break` and controlling execution using a condition

## Arduino Functions Used

`tone(pin, frequency);`

Generates a tone of the specified frequency.

`noTone(pin);`

Stops the tone.

`delay(milliseconds);`

Controls how long each frequency is played.

## Result
The passive buzzer successfully produced a frequency sweep from 1000 Hz to 3000 Hz. The sweep was programmed to repeat only three times using a counter variable and an `if` condition.

## Key Learning
A `break` statement can only be used inside a loop or switch statement. Since the repetition counter was outside the `for` loop, a condition was used to prevent the melody from executing after three cycles.

## Future Improvement
- Create smoother frequency sweeps using smaller frequency steps.
- Control the sweep speed using a potentiometer.
- Combine frequency sweeps with melodies.
- Use buttons to start and stop the buzzer.
