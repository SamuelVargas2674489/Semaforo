// C++ code
// 2674489, Microcontroladores, Samuel Vargas y Jean Paul Rodriguez
#include <LiquidCrystal.h>
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(11,INPUT);
  pinMode(3,INPUT);
}

void loop()
{
  bool A;
  bool B;
  int C;
  B=digitalRead (10);
  A=digitalRead (11);
  if(A==1 && B==1) goto secuencia1;
  if(A==0 && B==1) goto secuencia1;
    if (A==1)
    {
  digitalWrite(7,LOW);
      delay(500);
  digitalWrite(6,LOW);
      delay(500);
  digitalWrite(5,LOW);
      delay(500);
    } else {
  digitalWrite(7,HIGH);
      delay(5000);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
  delay(5000);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
    }
      if (B==1){
        secuencia1:
      digitalWrite(7,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6, HIGH);
        delay(500);
      digitalWrite(6, LOW);
        delay(500);  
   }
  }

