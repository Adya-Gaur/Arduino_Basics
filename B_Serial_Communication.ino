/* lcd.begin(16,2);           // start LCD (16 columns, 2 rows)
   lcd.clear();               // clear screen
   lcd.print("text");         // print text
   lcd.setCursor(col, row);   // set position (0–15, 0–1)
   lcd.cursor();              // show cursor
   lcd.noCursor();            // hide cursor
   lcd.blink();               // blinking cursor
   lcd.noBlink();             // stop blinking  
   
   CIRCCUIT - VSS → GND, VDD → 5V, VO → middle pin of potentiometer, Pot side 1 → 5V, Pot side 2 → GND,  RS → pin 12, RW → GND, E → pin 11,  
              D4 → pin 5, D5 → pin 4, D6 → pin 3, D7 → pin 2,  Pin 15 → 5V, Pin 16 → GND   */

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte smiley[8] = {0b00000, 0b01010, 0b01010, 0b00000, 0b10001, 0b01110, 0b00000, 0b00000};
byte heart[8] = {0b00000, 0b01010, 0b11111, 0b11111, 0b11111, 0b01110, 0b00100, 0b00000};

void setup() 
{
  lcd.begin(16, 2);
  lcd.createChar(1, heart); // store in slot 1
  lcd.createChar(0, smiley);  // store in slot 0
  lcd.setCursor(0,0);
  lcd.print("Hello, friend!");
  lcd.setCursor(0, 1);
  lcd.print("LCD Working");
  lcd.write(byte(0));  // print character 0
  lcd.write(byte(1));
}

void loop() 
{
}
