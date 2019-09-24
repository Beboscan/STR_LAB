#include <Arduino.h>
#define PINO0 11
#define PINO1 10
#define PINI0 A0

void setup() {
  // put your setup code here, to run once:
  pinMode(PINO0,OUTPUT);
  pinMode(PINO0,OUTPUT);
  pinMode(PINI0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PINI0)==LOW)
  {
    digitalWrite(PINO1,LOW);
    digitalWrite(PINO0,HIGH);
    delay(1000);
    digitalWrite(PINO0,LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(PINO0,LOW);
    digitalWrite(PINO1,HIGH);
    delay(1000);
    digitalWrite(PINO1,LOW);
    delay(1000);
  }  
}