#define PIR 14
void setup() {
  pinMode(14, INPUT);
  Serial.begin(9600);
}

void loop() {
  int pirvalue = digitalRead(PIR);  //14 = PIR

  if (pirvalue == HIGH){
    Serial.println("Human detected");
  }
  else {
    Serial.println("Human not detected");
  }
  delay(2000);

}
