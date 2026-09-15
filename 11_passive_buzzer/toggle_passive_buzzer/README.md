# Passive Buzzer Toggle with Push Button

## Overview

This project uses an Arduino Uno, a passive buzzer, and a push button to create a **toggle system**.

Each time the button is pressed, the buzzer changes its state:

* First press → Buzzer ON
* Second press → Buzzer OFF
* Third press → Buzzer ON
* And so on

The buzzer remains ON even after the button is released.

## Components

* Arduino Uno
* Passive Buzzer
* Push Button
* Breadboard
* Jumper Wires

## Circuit Connections

### Passive Buzzer

* Buzzer `+` → Arduino **D8**
* Buzzer `−` → **GND**

### Push Button

* One side → Arduino **D12**
* Opposite side → **GND**

No external resistor is required because `INPUT_PULLUP` uses the Arduino's internal pull-up resistor.

## Working Principle

The button is configured using:

`INPUT_PULLUP`

Therefore:

* Button released → D12 reads **HIGH**
* Button pressed → D12 reads **LOW**

Two states are maintained:

### Button State

`currentState` and `previousState` are used to detect a **new button press**.

The condition:

`currentState == LOW && previousState == HIGH`

means that the button has just been pressed.

### Buzzer State

`buzzerState` stores whether the buzzer should be ON or OFF.

Each new button press toggles the state:

`buzzerState = !buzzerState`

Therefore:

`LOW → HIGH → LOW → HIGH`

The buzzer is then controlled according to `buzzerState`.

## Important Concepts

### State Memory

The Arduino remembers the buzzer's state even after the button is released.

### Toggle

A toggle changes between two states:

`OFF → ON → OFF → ON`

### Edge Detection

Compari
