void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(2, HIGH);
  Serial.println("LED ON");
  delay(1000);
  digitalWrite(2, LOW);
  Serial.println(" LED OFF");
  delay(1000);

}
