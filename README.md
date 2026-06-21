# 🏠 Smart Home System (Door + Light + Security) using Arduino

This project is a fully integrated smart home system built using Arduino. It combines automatic lighting, motion detection security, and a smart password-controlled door lock.

---

## 🔥 Features

- 💡 Automatic smart lighting (LDR-based)
- 🚶 Motion detection using PIR sensor
- 🚨 Security alarm system with buzzer
- 🚪 Password-protected smart door (servo motor)
- ⌨️ Keypad-based access control
- 📟 LCD display support (optional)

---

## 🧩 Components Used

- Arduino Uno  
- PIR Motion Sensor  
- Photoresistor (LDR) + 10kΩ resistor  
- 4×4 Keypad  
- Servo Motor  
- LED + 220Ω resistor  
- Buzzer  
- I2C LCD (optional)  

---

## ⚙️ How It Works

### 💡 Smart Light
- Turns ON when it is dark AND motion is detected

### 🚨 Security System
- Activates buzzer when motion is detected

### 🚪 Smart Door
- User enters password via keypad
- Correct password → door opens (servo)
- Wrong password → access denied

---

## 🔌 Pin Configuration (Example)

- PIR → D2  
- LED → D9  
- Buzzer → D10  
- LDR → A0  
- Servo → D6  
- Keypad → D4–D12  
- LCD → A4 (SDA), A5 (SCL)  

---

## 🚀 Future Improvements

- Add IoT control (WiFi module)  
- Mobile app integration  
- Camera-based face recognition  
- SMS alert system  
- Cloud monitoring dashboard  

---

## 📸 Project Status

✔ Fully integrated smart home system  
✔ Working in Tinkercad simulation  
✔ Combines security + automation + access control  

---

## 👨‍💻 Author

Arduino Smart Home project developed for embedded systems learning and simulation practice.
