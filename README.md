## Hand-Controlled-Robotic-Arm
Arduino-based robotic arm controlled using flex sensors.

## Overview

The Glove Controlled Robotic Hand is an Arduino-based project that replicates human finger movements using flex sensors and servo motors. Flex sensors mounted on a glove detect finger bending, and the corresponding servo motors move the robotic hand fingers in real time. This project demonstrates the practical application of sensors, embedded systems, and robotics for gesture-controlled manipulation.

## Features

* Real-time finger motion tracking
* Individual control of all five fingers
* Arduino-based implementation
* Low-cost and easy-to-build design
* Suitable for learning robotics and embedded systems

## Components Used

* Arduino Mega
* 5 Flex Sensors
* 5 Servo Motors
* 10kΩ Resistors
* Breadboard
* Jumper Wires
* Glove
* Robotic Hand Structure (Cardboard/3D Printed)

## Working Principle

Each flex sensor changes its resistance when bent. The Arduino reads the analog values from the sensors and maps them to servo motor angles. As the user bends their fingers, the corresponding servo motors rotate, causing the robotic hand to mimic the finger movements.

## Circuit Description

* Flex sensors are connected to the Arduino analog input pins through voltage divider circuits using 10kΩ resistors.
* Servo motors are connected to Arduino digital PWM pins.
* The Arduino continuously reads sensor values and updates servo positions accordingly.

## Applications

* Robotics education
* Human-machine interaction
* Prosthetic hand research
* Gesture-controlled systems
* Assistive technology development

## Future Improvements

* Wireless communication using NRF24L01 modules
* Custom PCB design
* Battery-powered operation
* Improved mechanical design using 3D printing
* Gesture recognition and machine learning integration

## Author

Divanshi Arora
