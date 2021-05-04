const uint8_t BUTTON_PIN = 2;
const uint8_t LED_PIN = 12;

int buttonState;

void initLed(uint8_t ledPin) {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

/**
 * This code runs once
 **/
void setup() {
  // Init button
  pinMode(BUTTON_PIN, INPUT);

  // Init LED on Pin 12
  initLed(LED_PIN);

  // Disable built in LED
  initLed(LED_BUILTIN);
}

/**
 * This code runs forever after setup
 **/
void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}