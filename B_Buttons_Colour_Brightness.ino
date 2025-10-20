/*Two button input. Button 1 controls the intensity i.e. 3 levels of brightness and one off state, whereas, Button 2 is for changing colours */


int redPin = 9, greenPin = 10, bluePin = 11;
int brightnessPin1 = 3, colourPin2 = 5;
int lastButton2State = LOW, lastButton1State = LOW, button1State, buttonState2;
int briVal = 0, colour = 1, bri;

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

void LEDcolour(int colourVal, int brightness) //Custom function for making differnt colours
{
  if (colourVal == 1)
    colourOutput(0, brightness, 0); //Green in given level of brightness
  else if (colourVal == 2)
    colourOutput(brightness, brightness, 0); //Yellow
  else if (colourVal == 3)
    colourOutput(0, brightness, brightness); //Cyan
  else if (colourVal == 4)
    colourOutput(0, 0, brightness); //Blue
  else if (colourVal == 5)
    colourOutput(brightness, 0, brightness); //Magenta
  else if (colourVal == 6)
    colourOutput(brightness, 0, 0); //Red
  else if (colourVal == 7)
    colourOutput(brightness, brightness, brightness); //White 
}

void LEDbrightess(int brightnessVal)
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

  if(button1State == HIGH && lastButton1State == LOW)
  {
    if(briVal != 3)
      briVal = briVal++;
    else
      briVal = 0;
    lastButton1State = button1State;
    delay(100);
  }
  if (button2State == HIGH && lastButton2State == LOW)
  {
    if (colour != 7)
      colour = colour++;
    else colour = 1;
    lastButton2state = button2State;
    delay(100);
  }

  bri = LEDbrightness(briVal);
  LEDcolour(colour, bri);
}









