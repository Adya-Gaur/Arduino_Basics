/*Button is a digital input: HIGH(pressed) or LOW(not pressed). Arduino reads thr button state using digitalRead() and controls the LED with digitalWrite() accordingly.
CIRCUIT - LED anode(+) to pin 9 through 220 ohm resistor, LED cathode to GND. Connect one button pin to pin 2, other button pin to 5V. 
Add 10 kilo ohm resistor between pin 2 and GND (pull-down resistor ensures thr pin reads LOW when button is not pressed)*/

int ledPin = 9, buttonPin = 2, buttonState = 0;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) //Button pressed
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW); //Button not pressed
}
