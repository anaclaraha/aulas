#include <Servo.h>

Servo s;
int pos;

const int bot1 = 5;
const int bot2 = 6;



void setup() {
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  
  s.attach(9);
  Serial.begin(9600);
  s.write(160);
}

int var1;
int var2;

void loop() {
  var1 = digitalRead(bot1);
  var2 = digitalRead(bot2);
  
  if(var1){

    for(pos = 100; pos < 160; pos++)
    {
      s.write(pos);
      delay(15);
    }
  }

  if(var2){

    for(pos = 160; pos > 100; pos--)
    {
      s.write(pos);
      delay(15);
    }
  }
}
