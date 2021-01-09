int pin = 8;

void setup() {
  //pinMode(pin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, digitalRead(pin));
}
