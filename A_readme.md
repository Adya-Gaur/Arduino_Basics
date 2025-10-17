# Stage A: LED Basics 💡

## 🧠 Overview
This stage focuses on understanding how Arduino sends output signals through LEDs. It includes controlling brightness, sequencing multiple LEDs, and learning the concept of Pulse Width Modulation (PWM). These are the foundational exercises for all future actuator and motor control tasks.

## ⚙️ Tools & Components Used
- Arduino Uno  
- Single-color LEDs  
- RGB LED  
- 220Ω resistors  
- Breadboard  
- Jumper wires  
- Arduino IDE  

## 📚 Concepts & Learnings
- `pinMode()` – defining a pin as input or output  
- `digitalWrite()` – turning LEDs ON and OFF  
- `delay()` – controlling time intervals  
- `analogWrite()` – adjusting LED brightness through PWM  
- Understanding PWM pins (marked with ~ on the board)  
- RGB color control using three PWM pins  
- Current limiting and safe LED connection using resistors  

## 🧩 Projects in this Stage
1. **LED_Patterns.ino** – Multiple LEDs blink in a sequential pattern
    [YouTube Demo](https://www.youtube.com)
2. **Fade_LED.ino** – LED brightness gradually increases and decreases using PWM
    [YouTube Demo](https://www.youtube.com)
3. **RGB_LED.ino** – Generate different colors by mixing red, green, and blue light levels
    [YouTube Demo](https://www.youtube.com)

## 🔍 Observations / Notes
- Learned how varying the delay changes blink speed.  
- Understood the difference between digital (ON/OFF) and analog (brightness) control.  
- Discovered that PWM-enabled pins are required for smooth fading and RGB mixing.  
- Explored how RGB LEDs can produce multiple colors by adjusting PWM values.  

## 🚀 Next Steps
The next stage will focus on **input controls** — learning how to read data from buttons and switches.  
This will complete the basic input–output communication foundation before working with sensors.
