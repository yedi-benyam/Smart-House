# Smart-House

# 🏠 Smart Home Security & Lighting System (Arduino)

A simple Arduino-based smart home system that combines motion detection, automatic lighting, and security alarm features.
---

## 🔥 Features

- 💡 Smart automatic light control based on darkness and motion  
- 🚶 PIR motion detection system  
- 🚨 Buzzer alarm for intrusion detection  
- 🌙 Photoresistor-based light sensing  
- ⚡ Fully simulation-ready in Tinkercad  

---

## 🧩 Components Used

- Arduino Uno  
- PIR Motion Sensor  
- Photoresistor (LDR)  
- 10kΩ resistor  
- LED  
- 220Ω resistor  
- Buzzer  

---

## ⚙️ Working Principle

The system operates in two main modes:

### 💡 Smart Light Mode
- Detects ambient light using LDR  
- Turns ON LED only when it is dark AND motion is detected  

### 🚨 Security Mode
- PIR sensor detects motion  
- Activates buzzer alarm when movement is detected  

---

## 🔌 Circuit Overview

- PIR → Digital Pin 2  
- LED → Digital Pin 9  
- Buzzer → Digital Pin 10  
- LDR → Analog Pin A0  

---

## 💻 Arduino Code

Upload the main `.ino` file from this repository to your Arduino board or Tinkercad simulation.

---

## 🚀 Future Improvements

- Add LCD display for system status  
- Add keypad password security system  
- Add servo motor door lock  
- Upgrade to IoT-based remote monitoring  

---

## 📸 Project Status

✔ Completed in Tinkercad simulation  
✔ Fully functional sensor integration  
✔ Beginner-friendly smart home prototype  

---

## 👨‍💻 Author

Developed as a learning project in embedded systems and Arduino programming.
