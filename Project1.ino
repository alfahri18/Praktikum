// Define pins
const int BUZZER_PIN = D2;
const int LED_PIN = D5;
const int BUTTON_PIN = D6;

// Define variables
int buttonState = 0;

void setup() {
  // Initialize pins
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // Check button state
  buttonState = digitalRead(BUTTON_PIN);
  
  // If button is pressed, turn on LED and buzzer
  if (buttonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 100);
  } else {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
  }
}
