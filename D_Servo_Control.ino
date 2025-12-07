/*A servo motor is a small motor that can rotate to a specific angle and hold that position with precision. Never pwer more than one servo motors directly 
from Arduino 5V, use external 5V supply.
CIRCUIT - Brown - GND, Red - 5V, Yellow - pin 9*/

#include <Servo.h>
Servo myservo; //Servo object

void setup
{
  myservo.attach(9); // Connected to pin 9
}

void loop()
{
  myservo.write(0);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);

  for(int i = 0; i <= 180; i++)
  {
    myservo.write(i);
    delay(50);
  }
  for(int i = 180; i >= 0; i--)
  {
    myservo.write(i);
    delay(50);
  }

  for(int i = 0; i <= 180; i += 5) //Fast rotation 
  {
    myservo.write(i);
    delay(10);
  }

  randomSeed(analogRead(A0)); //Optional - makes random() more random
  int angle = random(0,181); // Random number between 0 and 180
  myservo.write(angle);
  delay(2000);
}
