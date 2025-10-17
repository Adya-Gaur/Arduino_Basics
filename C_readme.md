# Stage C: Sensors 🌡️📏💡

## 🧠 Overview
In this stage, the focus is on **input from the environment** — using different types of sensors to detect light, distance, and temperature.  
You’ll learn how analog and digital sensors work, how to read their data, and how to make Arduino respond intelligently to real-world conditions.

## ⚙️ Tools & Components Used
- Arduino Uno  
- LDR (Light Dependent Resistor)  
- Ultrasonic distance sensor (HC-SR04)  
- Temperature sensor (LM35 or DHT11)  
- Resistors  
- Breadboard and jumper wires  
- Arduino IDE & Serial Monitor  

## 📚 Concepts & Learnings
- Understanding **analog vs digital** sensors  
- Using `analogRead()` and `digitalRead()`  
- Mapping sensor values to real-world units using `map()`  
- Using **Serial Monitor** for debugging and viewing sensor output  
- Writing threshold-based conditions (like “if distance < 10cm → stop motor”)  
- Basics of sensor calibration and noise handling  
- Using simple mathematical conversions (e.g., voltage to temperature)  

## 🧩 Projects in this Stage
1. **LDR_LightSensor.ino** – Measure light intensity and control LED brightness accordingly.   [YouTube Demo](https://www.youtube.com)
2. **Distance_Sensor.ino** – Use ultrasonic sensor to detect obstacles and print distance in cm.   [YouTube Demo](https://www.youtube.com)
3. **Temperature_Sensor.ino** – Measure ambient temperature and display readings on Serial Monitor.   [YouTube Demo](https://www.youtube.com)

## 🔍 Observations / Notes
- Learned how sensors convert physical quantities into electrical signals.  
- Understood how to set thresholds for actions based on sensor readings.  
- Noted that sensor readings can fluctuate — added small delays or smoothing logic.  
- Began combining inputs and outputs (e.g., turn LED ON if it’s dark).  

## 🚀 Next Steps
Next stage will focus on **Motor Control** — learning how to drive motors, change their speed or direction, and start moving your robot! ⚙️🤖

