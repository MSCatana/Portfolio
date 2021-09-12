// create an array of frequencies
int notes[] = {262, 294, 330, 349};

void setup() {
  // begin serial communication
  Serial.begin(9600);
}

void loop() {
  // read the analog value and send it to the serial monitor
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  // use an if()...else statement to determine what note to play
  if (keyVal == 1023) {
    tone(8, notes[0]);
  } else if (keyVal >= 990 && keyVal <= 1010) {
    tone(8, notes[1]);
  } else if (keyVal >= 505 && keyVal <= 515) {
    tone(8, notes[2]);
  } else if (keyVal >= 5 && keyVal <= 10) {
    tone(8, notes[3]);
  } else {
    noTone(8);
  }
}
