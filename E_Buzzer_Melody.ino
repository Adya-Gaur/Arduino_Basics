/*Using Passive buzzer to generate different tunes.
  CIRCUIT - Buzzer anode -> Pin 9, Buzzer cathode -> GND*/

int buzzer = 9;
void setup() 
{
  tone(buzzer, 523);   // C5
  delay(200);
  noTone(buzzer);
  delay(50);
  tone(buzzer, 659);   // E5
  delay(200);
  noTone(buzzer);
  delay(50);
  tone(buzzer, 784);   // G5
  delay(300);
  noTone(buzzer);

  void errorTone();
  void successTone();
}

void successTone() 
{
  tone(9, 1000);
  delay(150);
  tone(9, 1500);
  delay(150);
  noTone(9);
}
void errorTone() 
{
  for(int i = 0; i < 3; i++) 
  {
    tone(9, 300);
    delay(150);
    noTone(9);
    delay(100);
  }
}

void loop() 
{  
}
