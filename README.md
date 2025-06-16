# Motion-Detector-Using-MSP430-LaunchPad-and-PIR-Sensor
A simple motion detection alarm system using the TI MSP430 LaunchPad and a PIR sensor. The system activates a buzzer and LED when motion is detected.
# Motion Detector Using MSP430 LaunchPad and PIR Sensor

This project demonstrates how to create a basic motion detection alarm system using a **TI MSP430 LaunchPad** and a **PIR (Passive Infrared) sensor**. When motion is detected (such as a human walking in front of the sensor), the system triggers an **LED** and **buzzer** to alert the user.

## 🔧 Components Used

- TI MSP430 LaunchPad
- PIR Sensor Module
- LED
- Buzzer
- Breadboard
- Jumper Wires
- Energia IDE (for code upload)

## ⚙️ Working Principle

The PIR sensor detects infrared radiation emitted by humans or animals. When motion is sensed, it sends a HIGH signal to the MSP430. The microcontroller then turns ON the LED and buzzer with a blinking effect to indicate motion detection.

## 📌 Features

- Motion detection using PIR sensor
- Audio-visual alert using buzzer and LED
- Low power microcontroller (MSP430)
- Easy to build and test on breadboard
- Code written in Energia (Arduino-like environment)

## 🧠 Modes of PIR Sensor

- **H (Retriggering Mode)**: Output stays HIGH as long as motion is detected (used in this project).
- **I (Non-Retriggering Mode)**: Output goes HIGH once per motion detection event.

## 🔌 Circuit Connections

| PIR Sensor Pin | MSP430 Pin |
|----------------|------------|
| VCC            | VCC (3.3V) |
| GND            | GND        |
| OUT            | P2.0 (pin 8) |

| Output Device | MSP430 Pin |
|---------------|------------|
| LED + Buzzer  | P1.4 (pin 6) |
