int red_led_pin = 8;
int led_delay_ms = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led_pin, HIGH);
  delay(led_delay_ms);
  digitalWrite(red_led_pin, LOW);
  delay(led_delay_ms);
}
