#include <DHT.h>

#define DHTPIN 13       
#define DHTTYPE DHT22

const int red_led = 2;    
const int green_led = 4;  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature();
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.println(" C");
  if (temperature > 30.0) {
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
  } else if (temperature < 24.0) {
    digitalWrite(red_led, LOW);
    digitalWrite(green_led, HIGH);
  } else {
    digitalWrite(red_led, LOW);
    digitalWrite(green_led, LOW);
  }
  delay(2000);  
}
