/*Pulse Width Modulation(PWM) - lets us simulate output using analog digital pins. 
 analogWrite(pin, value) function is used.
 PWM pins(marked with ~) - 3, 5, 6, 9, 10 & 11. These have special internal timer circuit that can generate super-fast ON/OFF pulses automatically- 
 that's what allows analogWrite() to work. Other pins would just turn the LED fully ON or OFF.
 alalogWrite(pin, 0) - LED off ; analogWrite(pin, 255) - LED fully bright ; Any value between 0-255 gives intermediate brightness.
  *Ardduino's analogWrite uses 8-bit value to represent the brightness. 8 bits => number is stored in 8 binary digits.
   00000000 - 0, 11111111 - 255. total number of possible values in 8 bits = 2^8 = 256 (ranging from 0 to 255)
 CIRCUIT - LED anode(+) pin 9 through 220 ohm resistor. Connect LED cathode(-) to GND
 The following code will make LED fade in and out smoothly.*/

int ledPin = 9; //PWM pin connected to LED. 
void setup()
{
  for(int brightness=1; brightness<=255; brightness++) //Loop for increasing brigntness
    {
      analogWrite(ledPin, brightness);
      delay(10); //Each level of brightness remains for 10ms - smooth fade in
    }
  for(int brightness=255; brightness>=0; brightness--)
    {
      analogWrite(ledPin, brightness);
      delay(10); //Smooth fade out
    }
}
