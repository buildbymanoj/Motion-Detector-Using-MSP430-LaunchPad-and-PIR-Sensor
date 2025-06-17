void setup() {
  pinMode(8, INPUT);   // PIR sensor input
  pinMode(6, OUTPUT);  // Output for LED and buzzer
}

void loop() {
  if (digitalRead(8) == HIGH) {
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    delay(100);
  }
}
