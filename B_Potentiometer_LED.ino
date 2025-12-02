//Analog input scaling
/*Potentiometer - Left pin → 5V, Right pin → GND, Middle pin → A0 (Analog input of Arduino). This allows Arduino to read the knob position as a number (0–1023).
LED - long leg (anode) → PWM pin (Pin 3), short leg (cathode) → 220Ω resistor → GND*/
  
int potPin = A0; 
int ledPin = 9;

void setup() 
{
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  int potValue = analogRead(potPin); // 0 to 1023
  int ledValue = map(potValue, 0, 1023, 0, 255); // convert to 0–255. map(value, fromLow, fromHigh, toLow, toHigh)

  analogWrite(ledPin, ledValue);   // control LED brightness
}
