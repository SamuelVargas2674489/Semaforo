#include <DHT.h>

#define DHTPIN D4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
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
}
