int pinLed = 9;
int i;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  
  for(i=0;i<256;i++){
    analogWrite(pinLed, i);
    delay(5);
  }
  for(i=255;i>=0;i--){
    analogWrite(pinLed, i);
    delay(5);
  }

}
