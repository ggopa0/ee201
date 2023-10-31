void setup() {
  //Set up pin 12
  pinMode(12, OUTPUT);
}

void loop() {
  //Turn LED on and off every .5 seconds
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
}
