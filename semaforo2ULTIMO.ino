int POTEN=A0;
bool ledr=7;
int NUMERO=1;
void setup()
{
  Serial.begin(9600);
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
  int secuencia1;
  B=digitalRead (10);
  A=digitalRead (11);
  analogRead (A0);
  secuencia0:
   if (B==1) goto secuencia4;
  if (A==1) goto secuencia1;
  else goto secuencia3;
  secuencia3:
  if (analogRead(POTEN)<=300){
    digitalWrite (7, HIGH);
  delay(800);
  digitalWrite (6,HIGH);
  delay(500);
  digitalWrite (7 , LOW);
  delay(100);
  digitalWrite (6 , LOW);
  delay(100);
  digitalWrite (5, HIGH);
  delay(900);
  digitalWrite (5, LOW);
  delay(100);
  digitalWrite (6, HIGH);
  delay(900);
  digitalWrite (6, LOW);
  delay(100);
  }
  if (analogRead(POTEN)>300)
  {
  digitalWrite (7 , HIGH);
  delay(5000);
  digitalWrite (6,HIGH);
  delay(1000);
  digitalWrite (7 , LOW);
  delay(100);
  digitalWrite (6 , LOW);
  delay(100);
  digitalWrite (5, HIGH);
  delay(3000);
  digitalWrite (5, LOW);
  delay(100);
  digitalWrite (6, HIGH);
  delay(1000);
  digitalWrite (6, LOW);
  delay(100);
  }
   if (7, HIGH)
  {
    Serial.print(NUMERO);
    NUMERO=NUMERO+1;
  }
  secuencia1:
  digitalWrite (7 , LOW);
  delay(100);
  digitalWrite (6 , LOW);
  delay(100);
  digitalWrite (5, LOW);
  delay(100);
    secuencia4:
  if (B==1){
    digitalWrite (6 , HIGH);
  delay(500);
  digitalWrite (6, LOW);
  delay(800);
}
}
