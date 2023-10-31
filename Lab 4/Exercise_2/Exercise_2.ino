void setup() {
  //Setup pins
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  //LED 12 on, LED 13 off for .2 seconds
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(200);
  //LED 12 off, LED 13 on for .8 seconds
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(800);
}