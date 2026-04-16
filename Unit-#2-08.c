
// Created by Ollie Pruys
// Created in Apr 2026
// This program rotates a servo with a potentiometer

# include <Servo.h>

Servo servo;

// 1023 (max potentiometer) divided by 180 (max servo)
const int ANGLE_TO_POTENTIOMETER_RATIO = 1023 / 180;

const int POTENTIOMETER_PIN = A0;
int POTENTIOMETER_VAL = 0;
int angle = 0;

void setup() {
    // servo pins
    servo.attach(9);
    servo.write(0);
}

void loop() {
   // convert value
   POTENTIOMETER_VAL = analogRead(POTENTIOMETER_PIN);
   angle = POTENTIOMETER_VAL / ANGLE_TO_POTENTIOMETER_RATIO;
   servo.write(angle);
}
