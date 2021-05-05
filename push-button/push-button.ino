/*
 * This code turns on/off a led by pressing a button
 */

#include <Arduino.h>

const uint8_t BUTTON_PIN = 2;
const uint8_t LED_PIN = 12;

/*
 * This code runs once
 */
void setup() {
  // Init button
  pinMode(BUTTON_PIN, INPUT);

  // Init LED on Pin 12
  pinMode(LED_PIN, OUTPUT);

  // Disable built in LED
  digitalWrite(LED_BUILTIN, LOW);
}

/*
 * This code runs forever after setup
 */
void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
