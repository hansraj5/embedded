// Embedded Systems Practicals
Experiment 7
  
Aim: To prints “Hello World” in the first line and “16*2 LCD” in the second line on LCD using Arduino Uno.
Software Used: Tinkercad software 

Required Circuit:



Code required for the experiment:
// C++ code
//
#include <LiquidCrystal.h> // include the library for LCD

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize the library with the numbers of the interface pins

Void setup() {
  Lcd.begin(16, 2); // set up the LCD’s number of columns and rows
  Lcd.setCursor(0, 0); // set the cursor to the first column and first row
  Lcd.print(“Hello World”); // print “Hello World” on the LCD
  Lcd.setCursor(0, 1); // set the cursor to the first column and second row
  Lcd.print(“16*2 LCD”); // print “16*2 LCD” on the LCD
}

Void loop() {
  // nothing to do here
}




Result (Output):
            

Precautions and sources of error:
•	Ensure that the circuit connections are proper.
•	Different devices should be attached to the respective pins of Uno.
•	Codes should be written in C++ correctly.
•	Ground (GND) must be connected.
