/*An LDR (Light Dependent Resistor/ Photoresistor) changes its resistance with light intensity: In bright light -> resistance decreases -> voltage decreases. In darkness -> 
resistance increases -> voltage increases. 
If it's dark -> LED turns ON & if it's dark bright -> turn LED OFF 
CIRCUIT - One leg of LDR -> 5V, other leg of LDR -> A0 and 10 kilo ohm resistor. The other end of the 10 kilo ohm -> GND. LED(+) -> pin 9 via 220 ohm resistor. LED(-) -> GND*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int ldrPin = A0, ldrValue = 0;

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("LDR Levels");
  delay(1500);
  lcd.clear();
}

void loop() 
{
  ldrValue = analogRead(ldrPin);
  lcd.setCursor(0, 0);
  lcd.print("Light: ");
  lcd.print(ldrValue); // Reads a value between 0 and 1023
  lcd.print("   ");   // clears extra digits

  lcd.setCursor(0, 1);
  if (ldrValue < 300) 
    lcd.print("Status: DARK   ");
  else if (ldrValue < 700) 
    lcd.print("Status: MEDIUM ");
  else 
    lcd.print("Status: BRIGHT ");

  delay(1000);
}
