#include "DHT.h"

#define DHTTYPE DHT11 // DHT 11

#define dht_dpin 13
DHT dht(dht_dpin, DHTTYPE);
float Temperature;
float Humidity;

void setup(void)
{
  Serial.begin(115200);
  pinMode(dht_dpin, INPUT);
  dht.begin();
  delay(700);
}

void loop() {
  Temperature = dht.readTemperature();
  Humidity = dht.readHumidity();

  Serial.print(Humidity);
  Serial.print(",");
  Serial.print(Temperature);
  Serial.println(",");
  delay(2000);
}
