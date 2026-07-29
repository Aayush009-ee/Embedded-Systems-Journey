# Basic Application of Active Buzzer | Arduino Uno

## Overview

This beginner-friendly Arduino project demonstrates how to interface and control an active buzzer using an Arduino Uno. It also introduces the basic theory behind active buzzers and their common applications in embedded systems.

## Components Required

* Arduino Uno
* Active buzzer
* 2 × Jumper wires
* Breadboard

## Circuit Connections

* Connect the **positive (+)** terminal of the active buzzer to **digital pin 13** of the Arduino Uno.
* Connect the **negative (−)** terminal of the active buzzer to **GND**.

## Working

The Arduino outputs a digital signal to the active buzzer through pin 13.

* When the output is **HIGH**, the active buzzer receives power and its built-in oscillator generates a continuous beep by converting electrical energy into sound energy.
* When the output is **LOW**, power is removed from the buzzer, causing it to stop producing sound.

## Concepts Learned

* Basic theory of an active buzzer
* Circuit connections and interfacing with Arduino Uno
* Controlling digital output using `digitalWrite()`
* Understanding HIGH and LOW digital signals
* Writing a simple Arduino program to control an output device
