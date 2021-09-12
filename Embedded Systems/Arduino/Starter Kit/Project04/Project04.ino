// definition of output pins
const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

// definition of input pins
const int blueSensorPin = A0;
const int greenSensorPin = A1;
const int redSensorPin = A2;

// variables to store the sensor readings
int blueValue = 0;
int greenValue = 0;
int redValue = 0;

int blueSensorValue = 0;
int greenSensorValue = 0;
int redSensorValue = 0;

void setup() {
  // serial communication (used to see the values of the sensors in the serial monitor)
  Serial.begin(9600);

  // define LED pins as output
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // read the sensors values with analogRead() and store the values
  redSensorValue = analogRead(redSensorPin);
  // delay used as the ADC (Analogic-Digital Converter) takes a millisecond to do its work
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);

  // print the sensors values (\t - tab)
  Serial.print("Raw Sensor Values \t red; ");
  Serial.print(redSensorValue);
  Serial.print("\t green; ");
  Serial.print(greenSensorValue);
  Serial.print("\t blue; ");
  Serial.print(blueSensorValue);

  // The function to change the LED’s brightness via PWM is called analogWrite().
  // It needs two arguments: the pin to write to, and a value between 0-255.
  // This second number represents the duty cycle the Arduino will output on the
  // specified pin. A value of 255 will set the pin HIGH all the time, making the
  // attached LED as bright as it can be. A value of 127 will set the pin HIGH
  // half the time of the period, making the LED dimmer. 0 would set the pin LOW
  // all the time, turning the LED oﬀ. To convert the sensor reading from a
  // value between 0-1023 to a value between 0-255 for analogWrite(), divide the
  // sensor reading by 4
  redValue = redSensorValue/4;
  greenValue = greenSensorValue/4;
  blueValue = blueSensorValue/4;

  // print out the mapped values
  Serial.print("Mapped Sensor Values \t red; ");
  Serial.print(redValue);
  Serial.print("\t green; ");
  Serial.print(greenValue);
  Serial.print("\t blue; ");
  Serial.print(blueValue);

  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
