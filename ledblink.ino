/*
BLINK LED SKETCH
BY HARRISON STEELE 
1/12/26
*/
void setup() {
  // put your setup code here, to run once:
 pinMode(13, OUTPUT); //set digital pin 13 to output
printf("Working!");
}

void loop() {
  digitalWrite(13, HIGH); //turn on digital pin 13
  delay(100); // in ms pause
  digitalWrite(13, LOW); //turn off digital pin 13
  delay(100); // in ms pause
}
