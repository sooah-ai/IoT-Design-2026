// Week 2: IoT Systems Design - LED Blink
// Target Hardware: ESP32

void setup() {
  // GPIO 2 is the standard built-in LED for most ESP32 boards
  pinMode(2, OUTPUT); 
}

void loop() {
  digitalWrite(2, HIGH); // Turn LED ON
  delay(1000);           // Wait 1 second
  digitalWrite(2, LOW);  // Turn LED OFF
  delay(1000);           // Wait 1 second
}
