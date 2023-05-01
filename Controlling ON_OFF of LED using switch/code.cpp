                                   Practical 2
   Aim:  Controlling ON/OFF of LED using switch.

   Apparatus required: Tinker cad software.

   Circuit diagram:
 
Figure 1 Circuit for switch control of LED

Code:


// C++ code
//Controlling on/off of an LED using switch.

int buttonStatus=5;
int LED=3;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(buttonStatus, INPUT);
}
void loop()
{
  buttonStatus = digitalRead(5);
  
  if(buttonStatus==HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
    digitalWrite(LED,LOW);
}



Output:
 
Figure 2 output circuit for switch control of LED


Result: The ON/OFF of LED has been LED has been successfully controlled by switch.


Precautions and sources of error:
•	Ensure that the circuit connections are proper.
•	Be aware of small mistakes while writing the code.
•	Don’t forget to connect the third terminal of the switch to the ground.

