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
- Using **Serial Monitor** and **LCD** for debugging and viewing sensor output  
- Writing threshold-based conditions 
- Basics of sensor calibration and noise handling  
- Using simple mathematical conversions (e.g., voltage to temperature)  

## 🧩 Projects in this Stage
1. **C_LDR_LightSensor.ino** – Measure light intensity and control LED brightness accordingly.   [YouTube Demo](https://youtu.be/56KRS9PNfag)
2. **C_IR_Sensor_Test.ino** – Use ultrasonic sensor to detect obstacles and print distance in cm.   [YouTube Demo](https://youtu.be/WvuJJdlCfog)
3. **C_Temperature_Sensor.ino** – Measure ambient temperature and display readings on Serial Monitor.   [YouTube Demo](https://www.youtube.com)
4. **C_UltrasonicSensor_Distance.ino** - Measure the distance and print reading on LCD.  [YouTube Demo](https://youtu.be/B5QkoM2uVwE)
5. **C_GasSensor.ino** - Measure the quality of air and determine wheter it's safe, moderate or dangerous.  [YouTube Demo](hhttps://youtu.be/t2zzwyKX1DM)
6. **C_FlameSensor.ino** - Detect flame in vicinity. [YouTube Demo](https://youtu.be/gt0wiajfQAg)
7. **C_Gyroscope+Accelerometer.ino** - [YouTube Demo](https://www.youtube.com)
8. **C_Pressure_Sensor.ino** - Measure and print TEmperature, Pressure and Altitude on LCD. [YouTube Demo](https://www.youtube.com)
9. **C_Vibration_Sensor.ino** - Detect Vibration. [YouTube Demo](https://www.youtube.com)

## 🔍 Observations / Notes
- Learned how sensors convert physical quantities into electrical signals.  
- Understood how to set thresholds for actions based on sensor readings.  
- Noted that sensor readings can fluctuate — added small delays or smoothing logic.  
- Began combining inputs and outputs (e.g., turn LED ON if it’s dark).  

## 🚀 Next Steps
Next stage will focus on **Motor Control** — learning how to drive motors, change their speed or direction, and start moving your robot! ⚙️🤖

