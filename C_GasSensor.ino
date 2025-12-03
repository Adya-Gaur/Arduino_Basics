/*MQ sensors are small modules that detect gases in the air. MQ-2 detcts Smoke, LPG, Butane, Methane
  CIRCUIT - VCC - 5V, A0 - A1 pin, GND - GND Pin. (D0 gives HIGH/LOW based on threshold)*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int gasPin = A1, gasValue = 0;

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("Gas Sensor");
  delay(1500);
  lcd.clear();
}

void loop() 
{
  gasValue = analogRead(gasPin);
  lcd.setCursor(0, 0);
  lcd.print("Gas: ");
  lcd.print(gasValue);
  lcd.print("   "); // clear extra digits
  lcd.setCursor(0, 1);

  if (gasValue < 300) 
    lcd.print("Status: Safe    ");
  else if (gasValue < 600) 
    lcd.print("Status: Medium  ");
  else 
    lcd.print("Status: DANGER! ");
  
  delay(400);
}
