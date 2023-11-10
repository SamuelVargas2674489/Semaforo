int red = D6;
int blue = D7;
int green = D8;
int redbrillo = 0;
int bluebrillo = 0;
int greenbrillo = 0;

void setup() {
  
  Serial.begin(115200);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  
}

void loop() {
  Serial.print("Red: ");
  while(Serial.available()==0){
  }
  redbrillo = Serial.parseInt();
  Serial.println(redbrillo);
  Serial.print("Green: ");
  while(Serial.available()==0){
  }
  greenbrillo = Serial.parseInt();
  Serial.println(greenbrillo);
  Serial.print("Blue: ");
  while(Serial.available()==0){
  }
  bluebrillo = Serial.parseInt();
  Serial.println(bluebrillo);
  Serial.println(" ");
  analogWrite(red, redbrillo);
  analogWrite(green, greenbrillo);
  analogWrite(blue, bluebrillo);
  delay(3000);
}
