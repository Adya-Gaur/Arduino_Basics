/*An IR sensor works using infrared light reflections. It has two eyes - IR LED (transmitter) and one photodiode (receiver). The transmitter sends out invusuble IR light. If there's
an object or white surface, IR light reflects back -> sensor detects it. If the surface is black or away -> IR light gets absorbed. So:
Object/White - Output LOW(0) ; No Object/Black -> Output HIGH(1)

CIRCUIT - VCC - 5V, OUT - Pin 8, GND - GND Pin */

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int irPin = 8, irValue;

void setup() 
{
  lcd.begin(16, 2);
  pinMode(irPin, INPUT);
  lcd.print("IR Sensor Test");
  delay(2000);
  lcd.clear();
}

void loop() 
{
  irValue = digitalRead(irPin);
  lcd.setCursor(0, 0);
  lcd.print("IR Value: ");
  lcd.print(irValue);
  lcd.print("  "); // clear extra
  lcd.setCursor(0, 1);
  
  if (irValue == LOW) 
    lcd.print("Obstacle: YES  ");  // MOST IR modules give LOW when obstacle detected
  else 
    lcd.print("Obstacle: NO   ");
  
  delay(1000);
}
