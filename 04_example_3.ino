#define PIN_LED 13
int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, toggle); // turn off LED.
  toggle = 1-toggle; //toggle LED value.
  delay(1000); // wait for 1,000 milliseconds
}
