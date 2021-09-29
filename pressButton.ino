#define led 4
#define btn 3
int aceso = 0;

void setup() {
  // A função pinMode, define o estado do pino, recebendo dois parametros o numero da porta e o modo dela (INPUT=Entrada OU OUTPUT=Saída)
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  // HIGH - lIGADO(5v)
  // LOW - Desligado(0v)
  
  if(digitalRead(btn) == HIGH){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
