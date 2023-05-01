   Aim: Use the  potentiometer to set the intensity of RGB LED and thus create your own color from amongst 16million colors. 

   Apparatus required: Tinkercad software.

   Circuit diagram:

// Figure 1 Circuit for potentiometer control of RGB led




Code: 
// C++ code
//RGB using potentiometer
#define RGB_RED_PIN 11
#define RGB_BLUE_PIN 10
#define RGB_GREEN_PIN 9
#define POTENTIOMETER_PIN A0

Void setup()
{
  pinMode(RGB_RED_PIN, OUTPUT);
  pinMode(RGB_BLUE_PIN, OUTPUT);
  pinMode(RGB_GREEN_PIN, OUTPUT);
}

Void loop()
{ 
  Int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  Int rgbValue = map(potentiometerValue, 0, 1023, 0, 1535);

  Int red;
  Int blue;
  Int green;
  If (rgbValue < 256) {
    Red = 255;
    Blue = rgbValue;
    Green = 0;
  }
  Else if (rgbValue < 512) {
    Red = 511 – rgbValue;
    Blue = 255;
    Green = 0;
  }
  Else if (rgbValue < 768) {
    Red = 0;
    Blue = 255;
    Green = rgbValue – 512;
  }
  Else if (rgbValue < 1024) {
    Red = 0;
    Blue = 1023 – rgbValue;
    Green = 255;
  }
  Else if (rgbValue < 1280) {
    Red = rgbValue – 1024;
    Blue = 0;
    Green = 255;
  }
  Else {
    Red = 255;
    Blue = 0;
    Green = 1535 – rgbValue;
  }
  analogWrite(RGB_RED_PIN, red);
  analogWrite(RGB_BLUE_PIN, blue);
  analogWrite(RGB_GREEN_PIN, green);
}


Output:

// Figure 2 output circuit potentiometer control of RGB

Result: The brightness of RGB LED has been successfully controlled by a potentiometer.

Precautions and sources of error:
•	Ensure that the circuit connections are proper.
•	Be aware of small mistakes while writing the code.



