void setup ()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT)
  }

void loop ()
{
  digitalWtite(13,HIGH);
  digitalWtite(12,LOW);
  delay (100);
  digitalWtite(13,LOW);
  digitalWtite(12,HIGH);
  delay (100);
