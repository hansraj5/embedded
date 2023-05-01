   Aim:  Use the potentiometer to change the brightness of red led.
   Apparatus required: Tinkercad software.
   Circuit diagram:
 
Figure 1 Circuit for brightness control of led using potentiometer
Code: 
// C++ code
//changing brightness of LED using potentiometer
#define LED_PIN 11
#define POTENTIOMETER_PIN A1
void setup()
{
  pinMode(LED_PIN, OUTPUT);
}
void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  int brightness = potentiometerValue/4 ;
  analogWrite(LED_PIN, brightness);
}
Output:
 
Figure 2 output Circuit for brightness control of led using potentiometer
Result: The brightness of the led has been successfully controlled by potentiometer.
Precautions and sources of error:
•	Ensure that the circuit connections are proper.
•	Be aware of small mistakes while writing the code.
•	Rotate the potentiometer smoothly to clearly observe the trend.

