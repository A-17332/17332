

#define SIGNAL_PIN 33 // ESP32 pin GIOP36 (ADC0) connected to sensor's signal pin

int value = 0; // variable to store the sensor value

void setup() {
  Serial.begin(9600);
  pinMode(SIGNAL_PIN, INPUT);   // configure pin as an OUTPUT
  //digitalWrite(POWER_PIN, LOW); // turn the sensor OFF
}

void loop() {
  //digitalWrite(POWER_PIN, HIGH);  // turn the sensor ON
 // delay(10);                      // wait 10 milliseconds
  value = analogRead(SIGNAL_PIN); // read the analog value from sensor
  //digitalWrite(POWER_PIN, LOW);   // turn the sensor OFF

  Serial.print("The water sensor value: ");
  Serial.println(value);

  delay(1000);
}
