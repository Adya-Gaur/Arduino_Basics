# Stage D: Motor Control ⚙️🚗💨

## 🧠 Overview
In this stage, I learned how to make Arduino **control motion** using motors — the foundation for robotics.  
This stage focuses on DC motors, servo motors, and motor drivers, learning how to control direction, speed, and angle through code and hardware connections.

## ⚙️ Tools & Components Used
- Arduino Uno  
- DC motor  
- L293D or L298N motor driver module  
- Servo motor  
- External power supply (for motors)  
- Jumper wires and breadboard  
- Arduino IDE  

## 📚 Concepts & Learnings
- Difference between **DC motors** and **servo motors**  
- Using **motor driver ICs** to safely power and control motors  
- Understanding **PWM (Pulse Width Modulation)** and its role in controlling speed  
- Using the `analogWrite()` function to vary speed  
- Controlling servo position with the `Servo` library  
- Understanding power management for motors (current requirements, separate supply, common ground)  
- Basics of motor direction control (clockwise & anticlockwise rotation)  

## 🧩 Projects in this Stage
1. **DC_Motor_Control.ino** – Control a single DC motor using digital pins for direction.  [YouTube Demo](https://www.youtube.com) 
2. **PWM_SpeedControl.ino** – Use PWM to vary DC motor speed smoothly.   [YouTube Demo](https://www.youtube.com)
3. **Servo_Control.ino** – Rotate a servo motor to specific angles using the Servo library.   [YouTube Demo](https://www.youtube.com)
4. **Dual_Motor_Test.ino** – Test two motors using L293D for bidirectional control.   [YouTube Demo](https://www.youtube.com)

## 🔍 Observations / Notes
- Learned that motors need more current than Arduino pins can provide directly.  
- Realized the importance of using **motor drivers** and **external power**.  
- Understood PWM as a technique to control analog-like behavior using digital signals.  
- Faced small voltage drops and learned about grounding issues — all part of debugging!  

## 🚀 Next Steps
Next comes the final stage — **Mini Projects Integration** 🤖🎯  
I’ll combine sensors, LEDs, and motors to create simple robots that *sense and move*, like line followers or obstacle avoiders.

