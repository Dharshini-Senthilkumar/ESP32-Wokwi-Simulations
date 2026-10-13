#include <Stepper.h>

const int stepsPerRevolution = 200;

const int coilPin1 = 16;  
const int coilPin2 = 17;  
const int coilPin3 = 18; 
const int coilPin4 = 19;  
const int pirPin = 15;

Stepper stepper(stepsPerRevolution, coilPin1, coilPin3, coilPin2, coilPin4);

bool motorRotated = false;
unsigned long noMotionTimer = 0;
const unsigned long noMotionDelay = 5000; 

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  stepper.setSpeed(10);  
  Serial.println("Setup complete.");
}

void loop() {
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    Serial.println("Motion detected!");
    if (!motorRotated) {
      stepper.step(stepsPerRevolution / 4);  
      motorRotated = true;
    }
    noMotionTimer = 0;  
  } 
  else {
    if (motorRotated) {
      if (noMotionTimer == 0) {
        noMotionTimer = millis();  
      }
      else if (millis() - noMotionTimer >= noMotionDelay) {
        Serial.println("No motion for 5 seconds. Rotating back.");
        stepper.step(-stepsPerRevolution / 4);  
        motorRotated = false;
        noMotionTimer = 0;
      }
    }
  }

  delay(1000);
}

