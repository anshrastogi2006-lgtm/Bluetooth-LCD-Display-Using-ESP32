# Bluetooth-LCD-Display-Using-ESP32
A Bluetooth-controlled 16x2 LCD Display using ESP32. Text entered from an Android phone is displayed wirelessly on the LCD in real time using Bluetooth Serial communication.
# Bluetooth Controlled LCD Display using ESP32

![Project](images/project.jpg)

## 📖 Overview

This project demonstrates wireless communication between an Android smartphone and an ESP32 development board using Bluetooth Serial Communication.

The user enters text in a Bluetooth terminal application on the smartphone, and the ESP32 receives the message wirelessly and displays it instantly on a 16×2 I2C LCD.

This project showcases the practical implementation of Embedded Systems, Bluetooth Communication, and Human-Machine Interface (HMI).

---

## 🚀 Features

- Wireless Bluetooth communication
- Real-time LCD text display
- ESP32-based embedded system
- 16×2 I2C LCD interface
- User-friendly communication
- Low-cost implementation

---

## 🛠 Hardware Components

- ESP32 Development Board
- 16×2 LCD Display
- I2C LCD Module
- Breadboard
- Jumper Wires
- USB Cable
- Android Smartphone

---

## 💻 Software Used

- Arduino IDE
- Embedded C
- Bluetooth Terminal App

---

## 🔌 Circuit Connections

| LCD Pin | ESP32 Pin |
|----------|-----------|
| SDA | GPIO 21 |
| SCL | GPIO 22 |
| VCC | 5V |
| GND | GND |

---

## ⚙️ Working Principle

1. Power the ESP32 board.
2. The ESP32 initializes Bluetooth communication.
3. The LCD is initialized using the I2C interface.
4. Connect the smartphone to the ESP32 via Bluetooth.
5. Open the Bluetooth Terminal application.
6. Enter any text message.
7. The ESP32 receives the message.
8. The received message is displayed instantly on the LCD.

---

## 📱 Project Demonstration

The smartphone sends text wirelessly through Bluetooth.

↓

ESP32 receives the data.

↓

The message is displayed on the 16×2 LCD in real time.

---

## 📂 Repository Structure

```
Bluetooth-LCD-Display-Using-ESP32/
│
├── ESP32_LCD.ino
├── README.md
├── LICENSE
├── demo.mp4
├── circuit.jpg
└── images
    └── project.jpg
```

---

## 📸 Project Image

> Upload your image inside the **images** folder with the name **project.jpg**.

The image will automatically appear at the top of this README.

---

## 🎥 Demonstration Video

A complete working demonstration video is included in this repository.

---

## 🎯 Applications

- Wireless Notice Board
- Home Automation
- Embedded Systems Projects
- IoT Applications
- Smart Display Systems
- Educational Projects

---

## 🔮 Future Improvements

- Wi-Fi Communication
- Voice Command Support
- Mobile Application
- Cloud Connectivity
- OLED Display
- Firebase Integration

---

## 📚 Skills Demonstrated

- ESP32 Programming
- Embedded C
- Bluetooth Communication
- Arduino IDE
- I2C Communication
- LCD Interfacing
- Electronics Prototyping

---

## 👨‍💻 Author

**Ansh Rastogi**

Electronics & Communication Engineering (ECE)

Interested in:
- Embedded Systems
- IoT
- ESP32
- Arduino
- Robotics

---

## ⭐ If you found this project useful, consider giving it a Star!
