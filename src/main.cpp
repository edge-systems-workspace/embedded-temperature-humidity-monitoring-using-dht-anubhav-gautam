#include <Arduino.h>
#include <DHT.h>
#define DHTPIN 2     // DHT11 CONNECTED TO D2
#define DHTTYPE DHT11   // Sensor type
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    dht.begin();
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 Sensor initialized!");
}

void loop() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
        delay(50);
        return;

}
