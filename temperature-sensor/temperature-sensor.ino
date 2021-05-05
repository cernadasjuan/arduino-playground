/*
 * This code senses the temperature every 5 seconds (using a LM35 sensor) and sends it through the Serial Port
 */

#include <Arduino.h>

const uint8_t SENSOR_PIN = A1;

/*
 * This code runs once
 */
void setup() {
  Serial.begin(9600);
}

/*
 * This code runs forever after setup
 */
void loop() {
  // Sensor returns a value between 0 (0V) and 1023 (5V), so we need to convert it
  int temp = analogRead(SENSOR_PIN) * 5 * 100 / 1024;
  Serial.print(temp);
  Serial.print("\n");
  delay(5000);
}