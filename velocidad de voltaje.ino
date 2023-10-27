void setup() {
  
  Serial.begin(9600);
}

void loop() {
 
  int sensorValue = analogRead(A0);
  float voltage = (sensorValue / 1023.0) * 5.0;
  Serial.print("Voltaje: ");
  Serial.print(voltage, 2); 
  Serial.println(" V");
  delay(100); 
}
