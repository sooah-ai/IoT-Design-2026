void setup() {
  pinMode(2, OUTPUT); // Built-in LED for ESP32 
}
void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}
