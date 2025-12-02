# Stage B: Input Controls 🎛️

## 🧠 Overview
This stage introduces the concept of inputs — how Arduino receives signals from the external world through buttons and switches.  
The goal is to understand how digital inputs work, how to handle button presses correctly, and how to make Arduino respond dynamically to user actions.

## ⚙️ Tools & Components Used
- Arduino Uno  
- Push buttons  
- 10 kΩ resistors (for pull-down or pull-up circuits)  
- LEDs (for visual feedback)  
- Breadboard  
- Jumper wires  
- Arduino IDE
- LCD
- Potentiometer

## 📚 Concepts & Learnings
- `pinMode(pin, INPUT)`, `pinMode(pin, INPUT_PULLUP)`, `map()` and lcd functions
- `digitalRead()` – reading HIGH or LOW states from buttons  
- Difference between **input** and **output** modes  
- Using pull-up and pull-down resistors to avoid floating inputs  
- Basic logic conditions (`if`, `else`)  
- State toggling with variables to remember previous input states  
- Understanding and handling switch bounce (debouncing)
- Handling multiple button input

## 🧩 Projects in this Stage
1. **B_Button_Control_LED.ino** – Pressing a button turns the LED ON; releasing turns it OFF.   [YouTube Demo](https://www.youtube.com)
2. **B_Toggle_LED_Button.ino** – Each button press toggles the LED state (ON/OFF).   [YouTube Demo](https://www.youtube.com)
3. **B_Buttons_Colour_Brightness.ino** – An RGB LED that changes colour and brightness using two buttons - one for hues, one for glow.   [YouTube Demo](https://www.youtube.com)
4. **B_Potentiometer_LED.ino** - LED brightness varies smoothly based on the potentiometer’s analog input.  [YouTube Demo](https://www.youtube.com)
5. **B_LCD_Communication.ino** - Displayed a custom message on a 16x2 LCD using Arduino to demonstrate basic text output control.   [YouTube Demo](https://www.youtube.com) 

## 🔍 Observations / Notes
- Learned that input pins can float and give random readings without resistors.  
- Observed how software debouncing or small delays stabilize button readings.  
- Understood that logic can be inverted when using the internal pull-up resistor (pressed = LOW).  
- Practised combining conditions to control multiple outputs simultaneously.  

## 🚀 Next Steps
Next stage will focus on **Sensors** — learning how Arduino reads environmental data such as light, distance, and temperature using analog and digital sensors.

