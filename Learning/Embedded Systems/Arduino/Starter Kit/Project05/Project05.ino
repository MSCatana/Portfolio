// import Servo library
#include <Servo.h>

// instance to refere to the Servo (creating a Servo object)
Servo myServo;

// variable declaration
int const potPin = A0; // potentiometer pin
int potVal; // potentiometer value
int angle; // angle (of the Servo) value

void setup() {
  // associating the servo object with the Arduino pin, initializing the serial port
  myServo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // reading and printing the potentiometer value
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);

  // mapping potentiometer value to the servo values
  angle = map(potVal, 0 ,1023, 0, 179); // map(number to be scaled, minimum input value, maximum input value, minimum output value, maximum output value)
  Serial.print(" , angle: ");
  Serial.println(angle);

  // rotating the servo
  myServo.write(angle); // write() moves the motor to the angle you specify
  delay(15);
}
