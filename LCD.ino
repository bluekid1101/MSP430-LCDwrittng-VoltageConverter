#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(P2_0, P2_1, P2_2, P2_3, P2_4, P2_5);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Mini Project: ");
  lcd.setCursor(0,1);
  lcd.print("Time: ");
}

void loop() {
  lcd.setCursor(9, 1);
  lcd.print(millis()/1000);
}
