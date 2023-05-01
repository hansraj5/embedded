Embedded Systems Practicals
•Experiment 8•
  
Aim: How to use Push Button with Arduino __ Pull Up/Down Mode.

Software Used: Tinkercad software 

Required Circuit:




Code required for the experiment:
// C++ code
//
Int buttonStatus; // Variable declare to store status of digitalWrite
 Void setup() 
{

  pinMode(1, OUTPUT); 
  pinMode(2, OUTPUT); 
  pinMode(0, INPUT); 
 }

Void loop()
 {

 buttonStatus = digitalRead(0);
  if (buttonStatus == HIGH) 
  { 
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH); 
  } 
  Else 
  {

 digitalWrite(1, LOW); 
  digitalWrite(2, LOW); 
  }
 }

Result (Output):



Precautions and sources of error:
•	Ensure that the circuit connections are proper.
•	Different devices should be attached to the respective pins of Uno.
•	Codes should be written in C++ correctly.
•	Ground (GND) must be connected.
