void setup() {
  //Setup pins
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Turning output pin to ON voltage
  digitalWrite(13, HIGH);
  //Reading input values
  int read1 = analogRead(A0);
  int read2 = analogRead(A1);
  
  //Converting from analog input to voltage
  double voltage1 = read1 * (5.0 / 1023.0);
  double voltage2 = read2 * (5.0 / 1023.0);

  //Print voltages
  Serial.print("Outer pin voltage: ");
  Serial.print(voltage1);
  Serial.print("V");
  Serial.println();
  Serial.print("Inner pin voltage: ");
  Serial.print(voltage2);
  Serial.print("V");
  Serial.println();
  delay(500);
}