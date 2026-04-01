/*
  Created by: Ollie Pruys
  Created on: Feb 2026

  Turns an LED on for one second, then off for one second, repeatedly.
*/

int pin5 = 5;

void setup()
{
  pinMode(pin5, OUTPUT);
}

void loop()
{
  digitalWrite(pin5, HIGH);
  delay(1000);
  digitalWrite(pin5, LOW);
  delay(1000);
}
