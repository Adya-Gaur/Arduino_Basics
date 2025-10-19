/*Instead of the LED bring ON only while its pressed, a toggle button makes it switch states with each press. Every time the button is pressed, the LED changes its state ON -> OFF -> ON
We need to detect the transition (button going from not pressed -> pressed), not just whether it's being held.
CIRCUIT - LED anode(+) to pin 9 through 220 ohm resistor, LED cathode to GND. Connect one button pin to pin 2, other button pin to 5V. 
Add 10 kilo ohm resistor between pin 2 and GND (pull-down resistor ensures the pin reads LOW when button is not pressed)*/

int ledPin = 9, buttonPin = 2;
int ledState = LOW; //Current state of LED
int lastButtonState = LOW, buttonState;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH && lastButtonState == LOW) //Check for button press (transition from LOW to HIGH)
  {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(50); /*Debouncing - When a mechanical button is pressed, it doesn't make a clean on/off contact. instead, it bounces - the signal rapidly flips between HIGH aand LOW for a few miliseconds
      before settling. This can confuse Arduino into thinking that button is pressed multiple times, even though it was pressed only once. So this command waits 50 ms, giving the button
      time to settle before checking again.*/ 
  }
  lastButtonState = buttonState;
}
