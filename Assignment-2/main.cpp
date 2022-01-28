#include <Arduino.h>
#define X 5
#define Y 4
#define Z 3
#define W 2

int x,y,z,w,F;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(X,INPUT);
  pinMode(Y,INPUT);
  pinMode(Z,INPUT);
  pinMode(W,INPUT);
  // put your setup code here, to run once:
}

void loop() {
  x=digitalRead(X);
  y=digitalRead(Y);
  z=digitalRead(Z);
  w=digitalRead(W);
  
  F=!((!((!(x&&!y))&&z))&&w);
  
  if(F==1)
          digitalWrite(LED_BUILTIN,HIGH);
  else
          digitalWrite(LED_BUILTIN,LOW);
  
  // put your main code here, to run repeatedly:
}
