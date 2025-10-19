/*RGB LED has 3 LEDs inside - Red, Green and Blue - each controlled by a PWM pin. Using analogWrite(), over 16 million(=256*256*256) colours canbe created.
The following code makes colours blend gradually in the sequence: 
Green -> Yellow (Red+Green) -> Cyan (Green+Blue) -> Blue -> Magenta (Red+Blue) -> Red -> White (Red+Blue+Green)
The colours blend, and the listed colours when formed, hold for 1 second and then start fading into the next one
CIRCUIT - RGB pins connected to PWM output Arduino pins and common cathode (-) is connected to GND pin. If LED is common anode LED, connect common pin to +5V instead.*/

int redPin = 9, greenPin = 10, bluePin = 11;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void setColour(int redVal, int greenVal, int blueVal) //Defining a function so that we don't have to write 3 analogWrite() statements again and again
{
  analogWrite(redPin, redVal);
  analogWrite(redPin, redVal);
  analogWrite(redPin, redVal);
}

void loop()
{
  for(int i=0; i<=255; i++) //Fading into Green
    {
      setColour(0, i, 0); //Invoking/Calling the defined function
      delay(10); //Smooth fading
    }
  setColour(0, 255, 0);
  delay(1000); //Green light for 1 second

  for(int i=0; i<=255; i++)
    {
      setColour(i, 255, 0); //Fading from Green to Yellow(Red+Green)
      delay(10);
    }
  setColour(255, 255, 0);
  delay(1000); //Yellow light for 1 second

  for(int i=0; i<=255; i++)
    {
      setColour(255-i, 255, i); //Fading from Yellow(Red+Green) to Cyan(Green+Blue)
      delay(10);
    }
  setColour(0, 255, 255);
  delay(1000); //Cyan light for 1 second

  for(int i=0; i<=255; i++)
    {
      setColour(0, 255-i, 255); //Fading from Cyan(Green+Blue) to Blue
      delay(10);
    }
  setColour(0, 0, 255);
  delay(1000); //Blue light for 1 second

  for(int i=0; i<=255; i++)
    {
      setColour(i, 0, 255); //Fading from Blue to Magenta(Red+Blue)
      delay(10);
    }
  setColour(255, 0, 255);
  delay(1000); //Magenta light for 1 second

  for(int i=0; i<=255; i++)
    {
      setColour(255, 0, 255-i); //Fading from Magenta(Red+Blue) to Red
      delay(10);
    }
  setColour(255, 0, 0);
  delay(1000); //Red light for 1 second

  for(int i=0; i<=255; i++)
    {
      setColour(255, i, i); //Fading from Red to White(Red+Green+Blue)
      delay(10);
    }
  setColour(255, 0, 255);
  delay(1000); //White light for 1 second
}














  
