/*Two Leg flame sensor - an IR photodiode tuned to detect the specific IR wavelength that fire emits (around 760–1100 nm)
  CIRCUIT - Flame sensor + → 5V, Flame sensor – → A0, A0 → 10k resistor → GND*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int flamePin = A0;   // analog input

void setup() {
  lcd.begin(16, 2);
  lcd.print("Flame Sensor");
}

void loop() {
  int value = analogRead(flamePin);

  lcd.setCursor(0, 1);
  if (value > 700) {            // threshold for flame
    lcd.print("Flame Detected ");
  } else {
    lcd.print("No Flame       ");
  }

  delay(200);
}


