# Sensor and Actuator – Task 01

## Project Overview
This project uses an Arduino Uno and an HC-SR04 ultrasonic sensor to detect nearby objects and control an LED.

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Distance Sensor
- LED
- 220-ohm resistor
- Jumper wires

## Working Principle
The ultrasonic sensor measures the distance between the sensor and an object. When an object is detected within 20 cm, the LED turns ON. When the object is farther away or no valid distance is detected, the LED turns OFF.

## Pin Connections
- HC-SR04 VCC → Arduino 5V
- HC-SR04 GND → Arduino GND
- HC-SR04 TRIG → Digital Pin 3
- HC-SR04 ECHO → Digital Pin 2
- Arduino Digital Pin 8 → 220-ohm resistor → LED anode (+)
- LED cathode (-) → GND

## Tools Used
- Wokwi Arduino Simulator
- Arduino C++

## Expected Output
- Object within 20 cm: LED ON
- Object beyond 20 cm: LED OFF

## Author
Mathavi E
