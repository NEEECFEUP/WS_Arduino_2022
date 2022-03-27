int pinLed1=9,pinLed2=5,pinLed3=3, pinButton=7;
void setup() {
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinButton, INPUT);
}
double tempo;
void loop() {
  if(digitalRead(pinButton) == LOW){
    tempo=millis();
    while(1){
      digitalWrite(pinLed1, HIGH);
      if((millis()-tempo)>=1000){
        digitalWrite(pinLed2, HIGH);
      }
      if((millis()-tempo)>=2000){
          digitalWrite(pinLed3, HIGH);
      } 
    if(digitalRead(pinButton) == HIGH)
    break;   
   } 
   
  }

  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed1, LOW);

}
