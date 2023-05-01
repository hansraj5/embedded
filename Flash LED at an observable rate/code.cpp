Aim: Flash LED at an observable rate.
Apparatus required: Tinker cad software.
Circuit diagram:
 
 Figure 1 Circuit for flash Led
 
Code: 
// C++ code
//flash led at an observable rate
int led1=2;
int led2=3;
void setup()
{
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
}
void loop()
{
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 delay(1000); // Wait for 1000 millisecond(s)
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 delay(1000); // Wait for 1000 millisecond(s)
}



Output:
Figure 2 output circuit for flash led
Result: The rate of flashing LED has been successfully observed.
Precautions and sources of error:
• Ensure that the circuit connections are proper.
• Be aware of small mistakes while writing the code.
• Take care of legs of led while connecting it.