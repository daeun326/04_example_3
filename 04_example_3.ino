#define PIN_LED 13
int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, toggle);
  toggle = 1-toggle;
  delay(1000);
}
