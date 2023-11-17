#include <DHT.h>

#define DHTPIN D4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
  pinMode (D3, OUTPUT);
  pinMode (D2, OUTPUT);
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(500);
  
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.print(" °C, Humedad: ");
  Serial.print(humidity);
  Serial.println(" %");
  if (temperature < 26.00){
  digitalWrite (D3, HIGH);
  }
  else {
  digitalWrite (D3, LOW);
  }
  if (temperature > 26.00){
  digitalWrite (D2, HIGH);
  }
  else {
  digitalWrite (D2, LOW);
  }
  if (temperature > 31.00){
  digitalWrite (D2, HIGH);
  delay(500);
  digitalWrite (D2, LOW);
  delay(500);
  digitalWrite (D3, HIGH);
  delay(500);
  digitalWrite (D3, LOW);
  }
}
