#include "MQ135.h"

#define PIN_MQ135 34

MQ135 mq135_sensor(PIN_MQ135);

//float temperature = 21.0; // Assume current temperature. Recommended to measure with DHT22
//float humidity = 25.0; // Assume current humidity. Recommended to measure with DHT22

void setup() {
  Serial.begin(9600);
  pinMode(PIN_MQ135, INPUT);
}

void loop() {
 // float rzero = mq135_sensor.getRZero();
 // float correctedRZero = mq135_sensor.getCorrectedRZero(temperature, humidity);
 // float resistance = mq135_sensor.getResistance();
 // float ppm = mq135_sensor.getPPM();
 float ppm=analogRead(PIN_MQ135);
//  float correctedPPM = mq135_sensor.getCorrectedPPM(temperature, humidity);

  //Serial.print("MQ135 RZero: ");
  //Serial.print(rzero);
 // Serial.print("\t Corrected RZero: ");
 // Serial.print(correctedRZero);
 // Serial.print("\t Resistance: ");
 // Serial.print(resistance);
  Serial.print("\t PPM: ");
  Serial.println(ppm);
  //Serial.print("\t Corrected PPM: ");
 // Serial.print(correctedPPM);
  //Serial.println("ppm");

  delay(1000);
}
