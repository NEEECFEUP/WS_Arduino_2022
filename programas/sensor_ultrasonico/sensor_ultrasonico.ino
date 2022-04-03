#include <HCSR04.h>

byte led=3;
byte triggerPin = 9;
byte echoPin = 11;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  HCSR04.begin(triggerPin, echoPin);
}

void loop()
{
  //Leitura da distância medida pelo sensor ultrasónico
  double *distance = HCSR04.measureDistanceCm();

  //Condições para o led ligar/desligar
  if(distance[0]<20){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

  //Escrita da distâcia lida na porta série
  Serial.print("Distance: ");
  Serial.print(distance[0]);
  Serial.println("cm");
  
  delay(200);
}
