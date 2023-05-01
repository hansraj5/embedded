Aim: Hello LED- Flash LED at a rate such that the LED appears always on.Estimate the onset of the rate when the LED appears to stay on..
   Apparatus required: Tinkercad software.
   Circuit diagram:

Figure 1 Circuit for Hello Led

Code: 
// C++ code
//hello led

Const int ledPin = 13;
Void setup() {
  pinMode(ledPin, OUTPUT);
}

Void loop() {
  digitalWrite(ledPin, HIGH); // Turn on LED
  delay(10); // Wait for 10 milliseconds
  digitalWrite(ledPin, LOW); // Turn off LED
  delay(10); // Wait for 10 milliseconds
}

Output:

Figure 2 output circuit for flash led

Result: Hello LED has been successfully studied.

Precautions and sources of error:
•	Ensure that the circuit connections are proper.
•	Be aware of small mistakes while writing the code.
•	Take care of legs of led while connecting it.

