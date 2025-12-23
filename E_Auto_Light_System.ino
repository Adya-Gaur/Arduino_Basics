//LDR + LED. Turns on LED when it gets dark

int LDRpin = A0, LDRvalue;
int LED[] = {2,3,4,5,6};

void setup()
{
  Serial.begin(9600);
  for(int i = 0; i < 5; i++)
      pinMode(LED[i], OUTPUT);
}

void loop()
{
  LDRvalue = analogRead(LDRpin);
  Serial.println(LDRvalue); // To choose threshold value
  if(LDRvalue < 400)
    LEDon();
  else
    LEDoff();
}

void LEDon() //LEDs turn on one by one
{
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(LED[i], HIGH);
    delay(500);
  }
}

void LEDoff()
{
  for(int i = 0; i < 5; i++)
    digitalWrite(LED[i], LOW);
}
