#include <Arduino.h>
int n=13;
void setup() {
  pinMode(n,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(n,HIGH);
  delay(1000);
  digitalWrite(n,LOW);
  delay(1000);
  // put your main code here, to run repeatedly:
}
