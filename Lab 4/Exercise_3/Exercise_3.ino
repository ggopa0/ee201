void setup() {
  //Setup pin
  pinMode(7, INPUT);
  //Setting up output
  Serial.begin(9600);
}

void loop() {
  //Checking switch
  if (digitalRead(7) == HIGH) {
    Serial.println("Hello World!");
  }  else {
    Serial.println("It's 2023");
  }
  delay(500);
}