void turnOffAllLed(){
  digitalWrite(redLed, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(yellowLed1, LOW);
  digitalWrite(yellowLed2, LOW);
  digitalWrite(yellowLed3, LOW);
  digitalWrite(greenLed, LOW);
}

void turnOnAllLedForCheck(){
  digitalWrite(redLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yellowLed1, HIGH);
  digitalWrite(yellowLed2, HIGH);
  digitalWrite(yellowLed3, HIGH);
  digitalWrite(greenLed, HIGH);  
  delay(1000);               // wait for a second
  digitalWrite(redLed, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(yellowLed1, LOW);
  digitalWrite(yellowLed2, LOW);
  digitalWrite(yellowLed3, LOW);
  digitalWrite(greenLed, LOW);
  delay(1000);               // wait for a second
}
