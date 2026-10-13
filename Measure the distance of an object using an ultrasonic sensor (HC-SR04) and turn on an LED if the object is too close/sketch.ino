const int trigpin = 13;     
const int echopin = 12;    
const int LED = 2;        

void setup() {
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  long duration = pulseIn(echopin, HIGH);
  float distance_cm = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  if (distance_cm < 10.0) {
    digitalWrite(LED, HIGH);
    Serial.println("LED ON");
  } 
  else {
    digitalWrite(LED, LOW);
    Serial.println("LED OFF");
  }
   delay(1000); 
}
