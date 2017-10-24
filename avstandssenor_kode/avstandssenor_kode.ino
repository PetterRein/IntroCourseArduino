void loop() {
  distance = ping();
  if(distance <= 40 && distance >= 30){
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed1, LOW);
    digitalWrite(yellowLed2, LOW);
    digitalWrite(yellowLed3, LOW);
    digitalWrite(greenLed, LOW);
  }
  else if(distance <= 30 && distance >= 20){
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed1, HIGH);
    digitalWrite(yellowLed2, LOW);
    digitalWrite(yellowLed3, LOW);
    digitalWrite(greenLed, LOW);
  }
  else if(distance <=20 && distance >=10){
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed1, HIGH);
    digitalWrite(yellowLed2, HIGH);
    digitalWrite(yellowLed3, LOW);
    digitalWrite(greenLed, LOW);
  }
  else if(distance <=10 && distance >=8){
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed1, HIGH);
    digitalWrite(yellowLed2, HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed3, HIGH);    
  }
  else if(distance <= 8 ){
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed1, HIGH);
    digitalWrite(yellowLed2, HIGH);
    digitalWrite(yellowLed3, HIGH);
    digitalWrite(greenLed, HIGH);
  }
  else{
   turnOffAllLed(); 
  }
}
