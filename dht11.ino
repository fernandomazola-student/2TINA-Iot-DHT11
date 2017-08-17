#include <DHT.h>
#include <DHT_U.h>

DHT dht(A0, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(isnan(t) || isnan(h)){
    Serial.println("Failed to read from DHT");
  }else{
    Serial.print("Umidade: ");
    Serial.print(h);
    Serial.print(" %t");
    Serial.print("Temperatura: ");
    Serial.print(t);
    Serial.println(" *C");
    }
}
