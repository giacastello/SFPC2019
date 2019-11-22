/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int dir = 1;    
void servo(){
  if (pos <= 180) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    pos += dir;                    // waits 15ms for the servo to reach the position
  } else {
    dir *= -1;
    pos = 0;
  }
}

float frame = 0;
void lights(){
  frame += 0.01;
  float in = sin(frame);
  if (in > 0) {
    analogWrite(3, in*255);
  } else {
    analogWrite(5, -255 * in);
  }
}

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  servo();
  lights();
  delay(5);

  
}

