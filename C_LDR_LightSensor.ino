/*An LDR (Light Dependent Resistor/ Photoresistor) changes its resistance with light intensity: In bright light -> resistance decreases -> voltage decreases. In darkness -> 
resistance increases -> voltage increases. 
If it's dark -> LED turns ON & if it's dark bright -> turn LED OFF 
CIRCUIT - One leg of LDR -> 5V, other leg of LDR -> A0 and 10 kilo ohm resistor. The other end of the 10 kilo ohm -> GND. LED(+) -> pin 9 via 220 ohm resistor. LED(-) -> GND*/

int ldrPin = A0, ledPin = 9, ldrValue = 0;
int threshold = 500; //Adjust based on lighting

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  ldrValur = analogRead(ldrPin);
  Serial.println(ldrValue); //For calibration
  
  if(ldrValue < threshold) //it's dark
    digitalWrite(ledPin, HIGH);
  else //it's bright
    digitalWrite(ledPin, LOW);
  delay(200);
}
