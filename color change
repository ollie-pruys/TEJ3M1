/*
  Created by: Ollie Pruys
  Created on: March 2026
  This program is to cycle through different colors
*/

// this indicates which pin is which color
void setup()
{
  pinMode(13, OUTPUT); //red
  pinMode(12, OUTPUT); //green
  pinMode(11, OUTPUT); //blue
}

// this cycles through the colors
void loop()
{
  digitalWrite(13, HIGH); //turns on red
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(13, LOW); //turns on green
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(13, LOW); //turns on blue
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  
  digitalWrite(13, HIGH); //turns on red-green
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(13, LOW); //turns on green-blue
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  
  digitalWrite(13, HIGH);//turns on blue-red
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
  
  digitalWrite(13, HIGH);//turns on white
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
}
