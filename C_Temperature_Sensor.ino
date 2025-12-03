//Read analog data - DHT11. Reads temperature and humidity
// CIRCUIT - + -> 5V, D -> Pin 7, - -> GND

#include <DHT.h>
#include <LiquidCrystal.h>
#define DHTPIN 7  
#define DHTTYPE DHT11   // We are using DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("DHT11 Sensor");
  delay(1000);
  lcd.clear();
  dht.begin(); // start sensor
}

void loop() 
{
  float h = dht.readHumidity();     // read humidity
  float t = dht.readTemperature();  // read temperature in °C

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C  ");
  lcd.setCursor(0, 1);
  lcd.print("Hum:  ");
  lcd.print(h);
  lcd.print(" %  ");

  delay(2000);  // DHT11 updates every ~2 seconds
}
