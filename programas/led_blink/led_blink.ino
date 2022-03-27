int pinLed=8;
void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  
  digitalWrite(pinLed, HIGH);
  delay(200);
  digitalWrite(pinLed, LOW);
  delay(200);
}
