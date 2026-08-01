# Button Controlled Active Buzzer

## Objective

To control an active buzzer using a push button. The buzzer should produce sound only while the push button is pressed and stop immediately when the button is released.

## Components Required

* Arduino Uno
* Active Buzzer
* Push Button
* 10 kΩ Resistor
* Breadboard
* Jumper Wires

## Circuit Connections

### Push Button

* One terminal → 5V
* Opposite terminal → Digital Pin 12
* 10 kΩ resistor between Digital Pin 12 and GND (Pull-down resistor)

### Active Buzzer

* Positive (+) terminal → Digital Pin 13
* Negative (−) terminal → GND

## Working Principle

The Arduino continuously reads the state of the push button using `digitalRead()`. When the button is pressed, Pin 12 becomes HIGH, causing the Arduino to set Pin 13 HIGH and activate the buzzer. When the button is released, Pin 12 becomes LOW, so the Arduino sets Pin 13 LOW and the buzzer turns off.

## Concepts Learned

* Digital Input using Push Button
* Digital Output using Active Buzzer
* `digitalRead()`
* `digitalWrite()`
* `if-else` statements
* Pull-down resistor
* Difference between a pin number and the value read from a pin

## Challenges Faced

* Initially compared the pin number (`switchPin`) with `LOW` instead of comparing the value returned by `digitalRead()`.
* Learned that `digitalRead()` returns a value that must be stored in a variable before it can be used in decision-making.
* Removed an unnecessary `delay(3000)` that made the button response slow.

## Applications

* Doorbell systems
* Alarm systems
* Warning indicators
* User input interfaces
* Electronic toys and games

## Outcome

Successfully built a button-controlled active buzzer where the buzzer sounds only while the push button is pressed and turns off immediately when the button is released.
