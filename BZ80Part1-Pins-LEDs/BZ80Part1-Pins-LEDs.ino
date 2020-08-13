#include "Arduino.h"

#define LED 13

void setup() {
  Serial.begin(115200);

  pinMode(LED,OUTPUT);
}

int wait = 10;

void loop() {
  digitalWrite(LED,HIGH);
  delay(wait);
  digitalWrite(LED,LOW);
  delay(wait);
}
