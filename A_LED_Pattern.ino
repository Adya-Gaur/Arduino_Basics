/*The following code will turn ON and OFF multiple LEDs one by one in a a loop creating a chasing effect.
Each LED will ligh up for a short time, then the next one, and so on.
CIRCUIT - Anodes(+) of 10 LEDs to Arduino pins through a 220 ohm resistor, and all cathodes(-) go to GND*/

int ledPins[] = {1,2,3,4,5,6,7,8,9,10}; //Array. LED pins
int numLED = 10;

void setup()
{
  for(int i=1; i<=10; i++)
    pinMode(ledPins[i], OUTPUT)
}

void loop()
{
  for(int i=1; i<=numLED; i++) //Forward sequence
    {
      digitalWrite(ledPins[i], HIGH);
      delay(200);
      digitalWrite(ledPins[i], LOW);
    }
  for(int i=numLED-1; i>=2; i--) //Reverse sequence. This loop controls only LEDs 9-2 so that LED 1&10 don't blink twice during direction change
    {
      digitalWrite(ledPins[i], HIGH);
      delay(200);
      digitalWrite(ledPins[i], LOW);
    }
}
