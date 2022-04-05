#define INTERVALO 2000

void setup() 
{
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  
  Serial.begin(9600);
}

double tempo = millis();
bool state = LOW;

void loop() 
{  
  if((millis() - tempo) >= INTERVALO)
  {
    tempo = millis();
    
    Serial.println(state);
    
  }  
  state = digitalRead(4); 
  digitalWrite(5,state);  
}
