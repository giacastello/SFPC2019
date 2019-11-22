#include <servo.h>
servo myServo;
int servoPos;

void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(serial.available() > 0 {
  servoPos = Serial.readStringUntil("/n").toInt();
  myServo.write(servoPos);
  }

}
