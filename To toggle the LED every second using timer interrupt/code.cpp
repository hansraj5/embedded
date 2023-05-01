   Aim:  To toggle the LED every second using timer interrupt.
   Apparatus required: Tinkercad software.
   Circuit diagram:


Figure 1 Circuit for toggling Led

Code: 
// C++ code
//toggling led
Const int ledPin = 13;
Volatile bool toggleLed = false;
Void setup() {
  pinMode(ledPin, OUTPUT);
  cli(); // Disable interrupts
  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1 = 0;
  OCR1A = 15624; // Set the compare match register (16MHz / 1024) * 1s = 15624
  TCCR1B |= (1 << WGM12); // Turn on CTC mode
  TCCR1B |= (1 << CS12) | (1 << CS10); // Set prescaler to 1024
  TIMSK1 |= (1 << OCIE1A); // Enable timer compare interrupt
  Sei(); // Enable interrupts
}
Void loop() {
  // Do nothing in the main loop
}
ISR(TIMER1_COMPA_vect) {
  toggleLed = !toggleLed; // Toggle the LED state
  digitalWrite(ledPin, toggleLed);
}

Output:


Figure 2 output Circuit for toggling Led

Result: The LED has been successfully toggled using timer interrupt.
Precautions and sources of error:
•	Ensure that the circuit connections are proper.
•	Be aware of small mistakes while writing the code.
•	Take care of legs of led while connecting it.





