/*
  Created by: Ollie Pruys
  Created on: March 2026
  This program rotates a servo when distance is under 50cm
*/

#include <Servo.h>

Servo servoNumber1;

  int trigPin = 3;
  int echoPin = 2;
  int servoActivation = 0;
  int angle = 0;
  int addition = 1;

float duration, distance;

Servo servo;

void setup() {
  // initiate sonar pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  // initiate servo pin
  servo.attach(4);
  servo.write(0);
}
  
void loop() {
  if (distance <= 50) {
    
    if (angle == 180) {
      addition    = -1;
    } else if (angle == 0) {
       addition  = 1;
    }
    angle = angle + addition;
    servo.write(angle);
    
  }
  // flash trig pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
}
