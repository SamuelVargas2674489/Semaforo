void setup() {
pinMode(D4,OUTPUT);
pinMode(D8,OUTPUT);
pinMode(D7,OUTPUT);
pinMode(D3,INPUT);
}
void loop() {
digitalWrite(D4,LOW); 
digitalWrite(D8,LOW);
delay(500);//delay en ms
digitalWrite(D4,HIGH);
digitalWrite(D8,HIGH);
delay(500);

if (digitalRead (D3)==LOW){
  digitalWrite (D7,HIGH);
  delay(200);
}
if (digitalRead (D3)==HIGH){
  digitalWrite (D7,LOW);
  delay(200);
}
}