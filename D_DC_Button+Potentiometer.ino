/*Button toggles the direction of motor spin and potentiometer knob is used to control the speed of the motor.
  CIRCUIT - Motor wires -> OUT1 and OUT2 of driver, L298N - ENA -> Pin 5, IN1 -> Pin 7, IN2 - Pin 8, 12V and GND -> battery case, Potentiometer - Left pin → 5V, 
  Right pin → GND, Middle pin → A0,  button pin -> pin 2, other button pin -> 5V, 10 kilo ohm resistor between pin 2 and GND*/

int IN1 = 7, IN2 = 8, ENA = 5, potValue = 0, potPin = A0, buttonState = 0, lastButtonState = 0, buttonPin = 2;
int IN1state = HIGH, IN2state = LOW, speed;
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  potValue = analogRead(potPin);
  speed = map(potValue, 0, 1023, 0, 255);
  
  if(buttonState == HIGH && lastButtonState == LOW)
  {
    IN1state = !IN1state;
    IN2state = !IN2state;
    delay(50); // Debounce
  }

  digitalWrite(IN1, IN1state);
  digitalWrite(IN2, IN2state);
  analogWrite(ENA, speed);

  lastButtonState = buttonState;
  
}
