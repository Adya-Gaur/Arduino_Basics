/*The following code will turn ON and OFF multiple LEDs one by one in a a loop creating a chasing effect.
Each LED will ligh up for a short time, then the next one, and so on.
CIRCUIT - Anodes(+) of 10 LEDs to Arduino pins through a 220 ohm resistor, and all cathodes(-) go to GND*/

int ledPins[] = {2,3,4,5,6,7,8,9,10,11}; //Array. LED pins
int numLED = 10;

void setup()
{
  for(int i=2; i<=11; i++)
    pinMode(ledPins[i], OUTPUT);
}

void loop()
{
  for(int i=2; i<=11; i++) //Forward sequence
    {
      digitalWrite(ledPins[i], HIGH);
      delay(200);
      digitalWrite(ledPins[i], LOW);
    }
  for(int i=10; i>=3; i--) //Reverse sequence. This loop controls only LEDs connected to pin 10-3 so that terminal LED connected to pin 2&11 don't blink twice during direction change
    {
      digitalWrite(ledPins[i], HIGH);
      delay(200);
      digitalWrite(ledPins[i], LOW);
    }
}
