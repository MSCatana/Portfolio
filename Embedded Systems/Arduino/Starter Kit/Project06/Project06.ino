// create variables for calibrating the sensor
int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

// name a constant for your calibration indicator
const int ledPin = 13;

void setup() {
// set digital pin direction and turn it high
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);

// use a while() loop for calibration
while (millis() < 5000) {
  // compare sensor values for calibration
  sensorValue = analogRead(A0);
  if (sensorValue < sensorHigh) {
    sensorHigh = sensorValue;
  }
  if (sensorValue < sensorLow ) {
    sensorLow = sensorValue;
  }
}

// indicate calibration has finished
digitalWrite(ledPin, LOW);
}

void loop() {
// read and store the sensor values
sensorValue = analogRead(A0);

// map the sensor value to a frequency
int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);

// play the frequency
tone(8, pitch, 20);

delay(10);

}
