int pinLed=9, pinButton=7;
void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT);
}

void loop() {
  
  if(digitalRead(pinButton) == LOW){
    digitalWrite(pinLed, HIGH);
  }
  else{
    digitalWrite(pinLed, LOW);
  }
  
  delay(20);
}
