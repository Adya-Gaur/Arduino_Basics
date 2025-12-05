/*Using L298N motor driver to rotate DC motor forward and backward
  CIRCUIT - Motor wires -> OUT1 and OUT2 of driver, L298N - ENA -> Pin 5, IN1 -> Pin 7, IN2 - Pin 8, 12V and GND -> battery case*/


int IN1 = 7,  IN2 = 8, ENA = 5;  // 5 is PWM pin
void setup() 
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() 
{
  digitalWrite(IN1, HIGH); //Forward
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 255); // speed 0-255
  delay(2000);

  digitalWrite(IN1, LOW); //Backward
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 100); //Slow
  delay(2000);

  digitalWrite(IN1, HIGH); //Forward -> Slowly to full speed
  digitalWrite(IN2, LOW);
  for(int i=0, i<=255, i++)
  {
    analogWrite(ENA, i);
    delay(50);
  }
  analogWrite(ENA,255);
  delay(2000);

  for(int i=255, i>=0, i--) //Slowly stopping
  {
    analogWrite(ENA, i);
    delay(50);
  }
  analogWrite(ENA,0); //Stop
  delay(2000);

  analogWrite(ENA,255); 
  delay(3000);
  digitalWrite(IN1, HIGH); //Short Break
  digitalWrite(IN2, HIGH);
}
