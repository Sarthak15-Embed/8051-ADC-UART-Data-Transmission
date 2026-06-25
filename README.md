# 📡 Real-Time ADC Data Transmission Using UART Between 8051 Microcontrollers

<p align="center">

![C Language](https://img.shields.io/badge/Language-Embedded%20C-blue)
![8051 Microcontroller](https://img.shields.io/badge/Microcontroller-8051-orange)
![UART Communication](https://img.shields.io/badge/Protocol-UART-green)
![ADC Interfacing](https://img.shields.io/badge/Peripheral-ADC-red)
![LCD Display](https://img.shields.io/badge/Display-16x2%20LCD-blueviolet)
![Embedded Systems](https://img.shields.io/badge/Domain-Embedded%20Systems-success)
![Firmware](https://img.shields.io/badge/Firmware-Register%20Level-yellow)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

</p>

---

# 📖 Project Overview

This project demonstrates **real-time ADC data acquisition and UART communication between two 8051 microcontrollers**.

The **Transmitter (TX)** continuously reads an analog input using an external ADC and transmits the converted digital value through **UART**.

The **Receiver (RX)** receives the UART data and displays the received ADC value on a **16×2 LCD** in real time.

The project is implemented completely in **Embedded C** using **register-level programming**, demonstrating reliable serial communication, peripheral interfacing, and real-time embedded firmware development.

---

# ✨ Features

* Real-Time ADC Data Acquisition
* UART Communication Between Two 8051 Microcontrollers
* Continuous ADC Value Transmission
* LCD Display of Received ADC Data
* Register-Level Embedded C Programming
* Real-Time Embedded Firmware
* Modular Transmitter and Receiver Code
* Compatible with AT89C51 / AT89S52

---

# 🎯 Applications

* Sensor Data Monitoring
* Industrial Automation
* Embedded Data Acquisition
* Remote Sensor Interface
* Embedded Communication Systems
* Real-Time Monitoring Systems
* Educational Embedded Projects

---

# 🛠 Hardware Requirements

| Component                        | Description                 |
| -------------------------------- | --------------------------- |
| AT89C51 / AT89S52                | 8051 Microcontroller (TX)   |
| AT89C51 / AT89S52                | 8051 Microcontroller (RX)   |
| External ADC                     | Analog-to-Digital Converter |
| 16×2 LCD                         | Display Module              |
| Potentiometer / Analog Sensor    | Analog Input                |
| Crystal Oscillator (11.0592 MHz) | Clock Source                |
| Power Supply                     | +5V                         |

---

# 💻 Software Requirements

* Keil uVision
* Embedded C
* Proteus (Optional)

---

# ⚙️ System Architecture

```text
        Analog Input
              │
              ▼
      +-----------------+
      | External ADC    |
      +-----------------+
              │
              ▼
+-----------------------------+
| 8051 Transmitter (TX)        |
| • Read ADC Value             |
| • UART Transmission          |
+-----------------------------+
              │
         UART Communication
              │
              ▼
+-----------------------------+
| 8051 Receiver (RX)           |
| • UART Reception             |
| • Process Received Data      |
+-----------------------------+
              │
              ▼
         16×2 LCD Display
```

---

# 🔌 Communication Flow

```text
Analog Sensor
      │
      ▼
External ADC
      │
      ▼
8051 (TX)
      │
UART Transmission
      │
      ▼
8051 (RX)
      │
      ▼
16×2 LCD
```

---

# ⚙️ Working Principle

1. The analog sensor provides an analog voltage.
2. The ADC converts the analog signal into digital data.
3. The transmitter 8051 reads the ADC value.
4. The digital value is transmitted through UART.
5. The receiver 8051 receives the UART data.
6. The received value is displayed on the 16×2 LCD.
7. Whenever the analog input changes, the LCD updates automatically in real time.

---

# 📡 UART Configuration

| Parameter          | Value        |
| ------------------ | ------------ |
| Communication Type | Asynchronous |
| Data Bits          | 8            |
| Stop Bits          | 1            |
| Parity             | None         |
| Baud Rate          | Configurable |
| Transmission Mode  | Full Duplex  |

---

# 📊 Data Flow

```text
Analog Input
      │
      ▼
ADC Conversion
      │
      ▼
8051 Transmitter
      │
UART
      │
      ▼
8051 Receiver
      │
      ▼
LCD Display
```

---

# 🧠 Code Description

## 📌 ADC Module

* Initializes ADC interface
* Reads analog input
* Converts analog signal into digital value

---

## 📌 UART Module

* Configures UART communication
* Transmits ADC values
* Receives UART data
* Ensures reliable serial communication

---

## 📌 LCD Module

* Initializes LCD
* Receives processed ADC value
* Displays data continuously

---

## 📌 Main Program

### Transmitter

* Initialize ADC
* Initialize UART
* Read ADC
* Transmit ADC Value
* Repeat Continuously

### Receiver

* Initialize UART
* Initialize LCD
* Receive UART Data
* Display ADC Value
* Repeat Continuously

---

# 📂 Repository Structure

```text
8051-ADC-UART-Data-Transmission
│
├── README.md
│
├── TX
│   └── Transmitter Firmware
│
├── RX
│   └── Receiver Firmware
│
├── Source_Code
│   ├── adc.c
│   ├── adc.h
│   ├── uart.c
│   ├── uart.h
│   ├── lcd.c
│   ├── lcd.h
│   └── main.c
│
└── Documents
```

---

# 🚀 How to Run

1. Open the TX and RX projects in Keil uVision.
2. Compile both programs.
3. Generate HEX files.
4. Program the respective 8051 microcontrollers.
5. Connect the UART TX and RX pins.
6. Apply analog input to the ADC.
7. Observe the received ADC value on the LCD.

---

# 📈 Expected Output

* ADC continuously reads analog input.
* UART transmits ADC data from TX to RX.
* Receiver successfully receives the data.
* LCD displays the received ADC value.
* Display updates immediately when the analog input changes.

---

# 🏆 Skills Demonstrated

### Programming

* Embedded C
* Register-Level Programming

### Microcontroller

* 8051 (AT89C51 / AT89S52)

### Communication Protocol

* UART (Universal Asynchronous Receiver Transmitter)

### Peripheral Interfacing

* ADC Interfacing
* 16×2 LCD Interfacing
* GPIO Configuration

### Embedded Concepts

* Real-Time Data Acquisition
* Serial Communication
* Embedded Firmware Development
* Peripheral Initialization
* Data Processing

---

# 📚 Learning Outcomes

Through this project, I gained practical experience in:

* ADC Interfacing
* UART Communication
* 8051-to-8051 Communication
* LCD Interfacing
* Embedded C Programming
* Register-Level Programming
* Real-Time Embedded Systems
* Firmware Development

---

# 🔮 Future Improvements

* Multi-Channel ADC Support
* Wireless Communication
* Bluetooth Interface
* SPI Communication
* I²C Sensor Integration
* EEPROM Data Logging
* IoT Dashboard Integration

---

# 📷 Project Demonstration

Circuit diagrams, Proteus simulation, and hardware images will be added in future updates.

Current repository focuses on firmware implementation and embedded communication logic.

---

# 👨‍💻 Author

**Sarthak Pampattiwar**

**Electronics & Telecommunication Engineer**

### Technical Skills

* Embedded C
* 8051 Microcontroller
* ARM7 LPC2148
* PIC16F877A
* UART
* SPI
* I²C
* ADC
* PWM
* GPIO
* Timers
* Interrupts
* LCD Interfacing
* Register-Level Programming
* Firmware Development

---

⭐ **If you found this project helpful, consider giving it a Star!**
