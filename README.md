# 🛠️ **Bondok - Smart Robot Car with Bluetooth Control**

## 📚 Table of Contents
1. [Overview](#overview)
2. [Features](#features)
3. [Technology Stack](#technology-stack)
4. [System Architecture](#system-architecture)
5. [Installation and Setup](#installation-and-setup)
6. [Usage](#usage)
7. [Research and Publications](#research-and-publications)
8. [Future Improvements](#future-improvements)

---

## 🚀 Overview
**Bondok** is an innovative robot car controlled via Bluetooth, designed for easy navigation with motorized wheels and real-time distance measurement using an ultrasonic sensor. Powered by an Arduino microcontroller, it can move forward, backward, turn left, and turn right based on Bluetooth commands sent from a mobile device. The LCD screen displays the distance measured by the ultrasonic sensor. This project is perfect for beginners and intermediate robotics enthusiasts. 🤖

---

## 🌟 Features
- **Bluetooth Control**: Controlled using Bluetooth commands ('F' for forward, 'B' for backward, 'L' for left, 'R' for right).
- **Distance Measurement**: Displays real-time distance using an ultrasonic sensor on an LCD screen.
- **Motorized Movement**: Uses L298N Motor Driver to control motorized wheels for motion.
- **LCD Display**: Shows the current distance measured by the ultrasonic sensor.
- **LED Indicators**: Visual feedback for left and right direction using LEDs. 💡
  
---

## 💻 Technology Stack
- **Arduino IDE** 🛠️
- **C++** for Arduino programming 💻
- **Bluetooth Communication** 📱
- **L298N Motor Driver** ⚡
- **LiquidCrystal LCD** for real-time display 💡
- **Ultrasonic Sensor** for distance measurement 📏

---

## 🏗️ System Architecture
- **Bluetooth Module**: Receives commands ('F', 'B', 'L', 'R') to control the motors.
- **Motor Driver (L298N)**: Controls the motors to drive the wheels.
- **Microcontroller (Arduino)**: Handles input/output, reads commands, and controls the system.
- **LCD Display**: Shows the measured distance from the ultrasonic sensor.
- **Ultrasonic Sensor**: Measures the distance in real-time. 🕹️

---

## 📝 Installation and Setup

### Hardware Requirements
1. **Arduino Uno** (or any compatible board)
2. **Bluetooth Module** (HC-05/HC-06)
3. **L298N Motor Driver**
4. **Two DC Motors**
5. **Ultrasonic Sensor (HC-SR04)**
6. **16x2 LCD Display**
7. **LEDs** (for direction indication)
8. **Jumper Wires & Breadboard**

### Software Requirements
1. **Arduino IDE** (Download [here](https://www.arduino.cc/en/software))
2. **Arduino Libraries**: `LiquidCrystal.h`

### Steps to Setup
1. **Connect the Components** as per the system's hardware diagram.
2. **Install the Arduino IDE** and connect the Arduino to your computer via USB.
3. **Upload the Code** from the provided `.ino` file into the Arduino board.
4. **Pair the Bluetooth Module** with your phone or computer.
5. **Power on the Robot Car** and open a serial monitor to view the distance readings.

---

## ⚙️ Usage

1. **Control the Robot**:
   - Use a Bluetooth terminal app or custom mobile application to send commands:
     - **'F'**: Move Forward
     - **'B'**: Move Backward
     - **'L'**: Turn Left
     - **'R'**: Turn Right
     - **Stop**: All motors stop when no command is sent.

2. **Observe the LCD Screen**:
   - The distance measured by the ultrasonic sensor is displayed on the LCD screen in real-time.

3. **LED Indicators**:
   - The left and right LEDs will indicate the robot's direction of movement.

---

## 📚 Research and Publications
This project was built to explore and implement basic robotics concepts, focusing on:
- **Bluetooth communication** for controlling robot movements.
- **Ultrasonic sensors** for real-time environmental interaction.
- **Motor control** using the L298N motor driver.
- **Arduino programming** using C++ for embedded systems.

---

## 🚀 Future Improvements
- **Advanced Obstacle Avoidance**: Implement obstacle detection algorithms to automatically avoid objects in the robot’s path using sensors.
- **Mobile App Integration**: Develop a mobile app with more advanced control features (e.g., speed control, real-time sensor data).
- **Machine Learning**: Integrate machine learning models to enable the robot to navigate autonomously.
- **GPS Integration**: Add GPS for outdoor navigation, enabling the robot to map its environment and navigate based on location data.

---

Feel free to fork this project, submit pull requests, and contribute to future improvements! ✨

---

**License**: MIT License
