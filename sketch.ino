class LED {
  int pin;
public:
  LED(int p) : pin(p) {
    pinMode(pin, OUTPUT);
  }
  void on() { digitalWrite(pin, HIGH); }
  void off() { digitalWrite(pin, LOW); }
};

LED led1(13); // Create LED object for pin 13
LED led2(12);
void setup() {
  // Already handled in constructor
}

void loop() {
  led1.on();
  led2.off();
  delay(500);
  led1.off();
  led2.on();
  delay(500);
}
