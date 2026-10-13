#define PIR 14   
#define LED 2    

void setup() {
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  int motion = digitalRead(PIR);

  if (motion == HIGH) {
    digitalWrite(LED, HIGH);
    Serial.println("Motion Detected: LED ON");
  } else {
    digitalWrite(LED, LOW);
    Serial.println("No Motion: LED OFF");
  }

  delay(1000);
}
