/*
  Created by: Ollie Pruys
  Created on: March 2026
  This Program Rotates A Servo
*/

#include <Servo.h>

Servo servoNumber1;

void setup() {
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
  servoNumber1.write(180);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}
