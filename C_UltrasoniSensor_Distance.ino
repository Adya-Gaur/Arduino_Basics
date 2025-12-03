/* Use HC-SR04 sensor. Display distance in cm. 
   CIRCUIT -> VCC - 5V, Trig - 9, Echo - 10, GND - GND*/

# include <Liquid crystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int trigPin = 9, echoPin = 10, distance;
long duration; // long because duration in microseconds can become a large value. int - upto 32767, long - upto 2147483647

void setup()
{
  lcd.begin();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.print("Ultrasonic Test");
  delay(3000);
  lcd.clear();
}

void loop() 
{
  digitalWrite(trigPin, LOW); //Trigger the sensor
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH); // Read the echo time
  distance = duration * 0.034 / 2;   // Convert time → distance. Speed of sound = 0.034 cm/µs. Divide by 2 because it travels to the object and back.

  lcd.setCursor(0, 0);
  lcd.print("Distance:     ");  // clear line
  lcd.setCursor(10, 0);
  lcd.print(distance);
  lcd.print("cm  ");

  delay(1000); // Updates every second
}
