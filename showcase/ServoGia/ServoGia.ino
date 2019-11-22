#include <Servo.h>

Servo servo1;

int pinServo = 2; // cable de señal del servo
int pulsoMin = 1000;
int pulsoMax = 2000;
int buttonZero = A0;
int buttonOne = A1;


void setup() {
  servo1.attach(pinServo, pulsoMin, pulsoMax);
  Serial.begin(9600) ; //crear conexión Arduino-compu
  pinMode(buttonZero, INPUT_PULLUP);  // set pull-up on analog pin 0
  pinMode(buttonOne, INPUT_PULLUP);   // set pull-up on analog pin 1
}

void loop() {
  int b0 = analogRead(buttonZero);
  int b1 = analogRead(buttonOne);
  Serial.print(analogRead(buttonZero));
  Serial.print(" ");
  Serial.println(analogRead(buttonOne));

  if (b0 <= 15 && b1 <= 15) {
    servo1.write(0);
    delay(500);
    servo1.write(180);
    delay(15000);
  } else {
    // :)
  }
}
