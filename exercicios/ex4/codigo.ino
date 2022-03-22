int botao =7;
int led =13;
bool estadoled = 0;

void setup()
{
  pinMode(botao, INPUT_PULLUP);
  "INPUT"
  pinMode(led, OUTPUT);
}

void loop()
{
  if(digitalread(botao) == LOW);
  {
    estadoLed=!estadoled;
    digitalWrite(led,estadoLed);
    while(digitalRead(botao)== LOW);
    delay(100);
  }}
