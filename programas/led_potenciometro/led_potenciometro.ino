int pinLed=3, pinPot=A3;
void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  int valor_medido;
  valor_medido = analogRead(pinPot) ;
  analogWrite(pinLed, valor_medido/4);
  delay(100);
}
