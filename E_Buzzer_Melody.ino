/*Using Passive buzzer to generate different tunes.
  CIRCUIT - Buzzer anode -> Pin 9, Buzzer cathode -> GND*/

int buzzer = 9;
int melody[] = {523, 659, 784, 784, 659, 523, 659, 784, 988}; //C5 E5 G5 G5 E5 C5 E5 G5 B5
int noteDurations[] = {200, 200, 300, 200, 200, 300, 200, 200, 400};
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

  for (int i = 0; i < 9; i++) 
  {
    tone(buzzer, melody[i]);
    delay(noteDurations[i]);
    noTone(buzzer);
    delay(50); // pause between notes
  }

  errorTone();
  successTone();
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
