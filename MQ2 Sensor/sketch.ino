int mq2_pin = 33;

void setup() {
  pinMode(33, INPUT);
  Serial.begin(115200);
  delay(1000);

}
void loop() {
  int sensorvalue = analogRead(mq2_pin);
  Serial.print("MQ2 Value");
  Serial.println(sensorvalue);
  delay(1000);

}