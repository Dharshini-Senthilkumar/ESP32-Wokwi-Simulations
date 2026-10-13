#define LED1 2   // GPIO2
#define LED2 4   // GPIO4
#define LED3 5   // GPIO5

void setup() {
  Serial.begin(115200);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  Serial.println("Condition 1: LED1 ON, LED2 OFF, LED3 OFF");
  delay(1000);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  Serial.println("Condition 2: LED1 OFF, LED2 ON, LED3 OFF");
  delay(1000);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  Serial.println("Condition 3: LED1 OFF, LED2 OFF, LED3 ON");
  delay(1000);
}
