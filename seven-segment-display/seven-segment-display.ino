/*
 * This code shows all numbers between 0 and 9 (one number every 1 second) using
 * a seven segment LED display (catode)
 */

#include <Arduino.h>

const int8_t PIN_A = 2;
const int8_t PIN_B = 3;
const int8_t PIN_C = 4;
const int8_t PIN_D = 5;
const int8_t PIN_E = 6;
const int8_t PIN_F = 7;
const int8_t PIN_G = 8;

int8_t currentNumber = 0;

/*
 * This code runs once
 */
void setup() {
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  pinMode(PIN_D, OUTPUT);
  pinMode(PIN_E, OUTPUT);
  pinMode(PIN_F, OUTPUT);
  pinMode(PIN_G, OUTPUT);
}

/*
 * This code runs forever after setup
 */
void loop() {
  NumberPrinter::print(currentNumber);

  if (currentNumber == 9) {
    currentNumber = 0;
  } else {
    currentNumber++;
  }

  delay(1000);
}
