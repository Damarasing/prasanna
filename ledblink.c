#include <Arduino.h>

const int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(7000);
  digitalWrite(ledPin, LOW);
  delay(7000);
}