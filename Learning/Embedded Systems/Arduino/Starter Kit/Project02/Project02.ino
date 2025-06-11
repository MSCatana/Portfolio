int switchState = 0;

void setup() {
  // configuration of digital pins for either input or output
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  switchState = digitalRead(2);

  if(switchState == LOW) {
    digitalWrite(3, HIGH); // green LED
    digitalWrite(4, LOW); // red LED
    digitalWrite(5, LOW); // red LED
  } else {
    digitalWrite(3, LOW); // green LED
    digitalWrite(4, LOW); // red LED
    digitalWrite(5, HIGH); // red LED

    delay(250); // wait for a quarter second
    // toggle the LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // wait for a quarter second
  }
} // go back to the beginning of the loop
