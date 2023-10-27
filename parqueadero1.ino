// 2674489, Microcontroladores, Samuel Vargas y Jean Paul Rodriguez
int Cupos_parqueadero;
int numero=1;
int ENTRADA=4;
int SALIDA=3;
int SUMA=0;
int RESTA;
float RECAUDO=0;
void setup()
{
  Serial.begin(9600);
  pinMode(ENTRADA,INPUT);
  pinMode(SALIDA,INPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  if (digitalRead (ENTRADA)==HIGH)
  {
    delay(800);
    Serial.println (numero);
    Serial.println (RECAUDO);
    numero=numero+1;
  }
  if (digitalRead (SALIDA)==HIGH)
  {
    delay(500);
    numero=numero-1;
    Serial.println (numero);
    Serial.println (RECAUDO);
    RECAUDO=RECAUDO+5000;
  }
  if (numero>=10)
  {
    digitalWrite(7, HIGH);
    digitalWrite(5, LOW);
    numero=10;
  }
  if (numero<=10)
  {
    digitalWrite(7, LOW);
    digitalWrite(5, HIGH);
  }
  }
