/*Two button input.
This project controls an RGB LED using two push buttons - one to adjust brightness and the other to change colours. The program is structured with custom 
functions for cleaner and modular code. A dedicated colourOutput() function handles the analog PWM outputs, while LEDcolour() is designed to select and 
output one of the seven colours based on the current colour mode (colourVal). Similarly, LEDbrightness() maps brightness levels (0-3) to corresponding PWM
values. 
Inside the main loop, button inouts are read and used to update colour and brightness modes dynamically. The final output smoothly displays the selected
colour at the chosen brightness level, demonstrating efficient use of functions, PWM, and button handling in Arduino.

CIRCUIT - Connect Red, Green,and Blue leg to pin 9, 10 and 11 respectively through 220 ohm resistors. Cathode is connected to GND.
  One leg of Button1 (for brightness control) - pin 3 and Button2 (for colour change) - pin 5; other leg - +5V. 10 kilo ohm resistor is connected
  between the input pin and GND.*/

int redPin = 9, greenPin = 10, bluePin = 11;
int brightnessPin1 = 3, colourPin2 = 5;
int lastButton2State = LOW, lastButton1State = LOW, button1State, buttonState2;
int briVal = 0, colourVal = 1, bri;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(brightnessPin1, INPUT);
  pinMode(colourPin2, INPUT);
}

void colourOutput(int redVal, int greenVal, int blueVal) //Custom function to avoid writing analogWrite() statements again and again
{
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);
}

void LEDcolour(int colour int brightness) //Custom function for giving differnt colours as output
{
  if (colour == 1)
    colourOutput(0, brightness, 0); //Green in given level of brightness
  else if (colour == 2)
    colourOutput(brightness, brightness, 0); //Yellow
  else if (colour == 3)
    colourOutput(0, brightness, brightness); //Cyan
  else if (colour == 4)
    colourOutput(0, 0, brightness); //Blue
  else if (colour == 5)
    colourOutput(brightness, 0, brightness); //Magenta
  else if (colour == 6)
    colourOutput(brightness, 0, 0); //Red
  else if (colour == 7)
    colourOutput(brightness, brightness, brightness); //White 
}

void LEDbrightess(int brightnessVal) //Function that returns PWM value based on selected brightness modey
{
  if (brightnessVal == 1)
    bri = 85;
  else if (brightnessVal == 2)
    bri = 170;
  else if (brightnessVal == 3)
    bri = 255;
  else if (brightnessVal == 0)
    bri = 0;
  return bri;
}

void loop()
{
  button1State = digitalRead(brightnessPin1);
  button2State = digitalRead(colourPin2);

  if(button1State == HIGH && lastButton1State == LOW) //If button 1 pressed -> brightness level changes
  {
    if (briVal != 3)
      briVal = briVal++;
    else
      briVal = 0; //Reset. 1-> 2-> 3 -> 0 -> 1 ....
    delay(100);
  }
  if (button2State == HIGH && lastButton2State == LOW) //If button 2 pressed -> colour changes
  {
    if (colourVal != 7)
      colourVal = colourVal++;
    else colourVal = 1; //Reset. 1 -> 2-> 3 -> 4 -> 5 -> 6 -> 7 -> 1 ....
    delay(100);
  }

  lastButton1State = button1State;
  lastButton2state = button2State;
  bri = LEDbrightness(briVal);
  LEDcolour(colourVal, bri); //Gives output
}

/*Honest Thoughts - Handling two independent inputs, two logical modes (colour and brightness), function stucturing and PWM-based output control - in short,
designing a system that responds dynamically - it felt a little tough. But, the moment it worked, it felt magical and so rewarding! 
Do check out the YouTube Demo linked in B_readme.md */
