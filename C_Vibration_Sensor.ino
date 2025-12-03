/*Vibration Switch is a tiny device made of: A small metal spring inside and a metal contact pin. When the switch is shaken or vibrated:the spring touches 
the pin → circuit closes, when still → spring stays away → circuit open. So it's like a simple ON/OFF switch that closes only when shaken.
CIRCUIT - One leg - 5V, other leg - Pin 8, 10 Kohm resistor -> GND*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 12, 5, 4, 3, 2);
int vibrationPin = 8, vibrationState = 0;

void setup() 
{
  pinMode(vibrationPin, INPUT);
  lcd.begin(16, 2);           
  lcd.print("Vibration Sensor");
  delay(2000);
  lcd.clear();
}

void loop() 
{
  vibrationState = digitalRead(vibrationPin);
  lcd.setCursor(0, 0);
  lcd.print("Status:          ");   // Clear line safely
  lcd.setCursor(0, 1);
  if (vibrationState == HIGH) 
    lcd.print("VIBRATION!       ");
  else
    lcd.print("No vibration     ");

  delay(50);
}
