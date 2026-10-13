#define LDR 12
#define LDR_DO 14
void setup() {
  pinMode(12, INPUT);
  pinMode(14, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorvalue = analogRead(LDR);
  Serial.print("Light Intensity: ");
  Serial.println(sensorvalue);
  

  int dovalue = digitalRead(LDR_DO);
  Serial.print("Digital_Output: ");
  Serial.println(dovalue);
  delay(1000);
}
