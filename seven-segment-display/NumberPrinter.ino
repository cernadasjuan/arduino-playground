/*
 * This helper class prints a number in a 7-segment led display
 */
class NumberPrinter {
 public:
  static void print(int8_t number) {
    switch (number) {
      case 0:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, HIGH);
        digitalWrite(PIN_E, HIGH);
        digitalWrite(PIN_F, HIGH);
        digitalWrite(PIN_G, LOW);
        break;
      case 1:
        digitalWrite(PIN_A, LOW);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, LOW);
        digitalWrite(PIN_E, LOW);
        digitalWrite(PIN_F, LOW);
        digitalWrite(PIN_G, LOW);
        break;
      case 2:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, LOW);
        digitalWrite(PIN_D, HIGH);
        digitalWrite(PIN_E, HIGH);
        digitalWrite(PIN_F, LOW);
        digitalWrite(PIN_G, HIGH);
        break;
      case 3:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, HIGH);
        digitalWrite(PIN_E, LOW);
        digitalWrite(PIN_F, LOW);
        digitalWrite(PIN_G, HIGH);
        break;
      case 4:
        digitalWrite(PIN_A, LOW);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, LOW);
        digitalWrite(PIN_E, LOW);
        digitalWrite(PIN_F, HIGH);
        digitalWrite(PIN_G, HIGH);
        break;
      case 5:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, LOW);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, HIGH);
        digitalWrite(PIN_E, LOW);
        digitalWrite(PIN_F, HIGH);
        digitalWrite(PIN_G, HIGH);
        break;
      case 6:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, LOW);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, HIGH);
        digitalWrite(PIN_E, HIGH);
        digitalWrite(PIN_F, HIGH);
        digitalWrite(PIN_G, HIGH);
        break;
      case 7:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, LOW);
        digitalWrite(PIN_E, LOW);
        digitalWrite(PIN_F, LOW);
        digitalWrite(PIN_G, LOW);
        break;
      case 8:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, HIGH);
        digitalWrite(PIN_E, HIGH);
        digitalWrite(PIN_F, HIGH);
        digitalWrite(PIN_G, HIGH);
        break;
      case 9:
        digitalWrite(PIN_A, HIGH);
        digitalWrite(PIN_B, HIGH);
        digitalWrite(PIN_C, HIGH);
        digitalWrite(PIN_D, HIGH);
        digitalWrite(PIN_E, LOW);
        digitalWrite(PIN_F, HIGH);
        digitalWrite(PIN_G, HIGH);
        break;
      default:
        break;
    }
  }
}