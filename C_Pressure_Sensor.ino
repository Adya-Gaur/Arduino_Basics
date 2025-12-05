/*CIRCUIT - VCC - 3.3V, SCL - A5 Pin, SDA - A4 Pin, GND - GND*/

#include <Wire.h>
#include <Adafruit_BMP280.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Adafruit_BMP280 bmp;

void setup() 
{
  lcd.begin(16, 2);
  if (!bmp.begin(0x76)) 
  {   // Most BMP280 modules use 0x76
    lcd.print("BMP280 Error!");
    while (1);
  }
  lcd.print("BMP280 Ready");
  delay(1000);
  lcd.clear();
}

void loop() 
{
  float temperature = bmp.readTemperature();       // °C
  float pressure = bmp.readPressure() / 100.0;     // hPa
  float altitude = bmp.readAltitude(1013.25);      // sea level pressure default

  lcd.setCursor(0, 0);
  lcd.print("T:"); 
  lcd.print(temperature);
  lcd.print("C   ");
  lcd.setCursor(0, 1);
  lcd.print("P:");
  lcd.print(pressure);
  lcd.print("hPa");

  delay(1000);
}

