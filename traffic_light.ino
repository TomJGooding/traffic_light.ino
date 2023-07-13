int red_led_pin = 13;
int orange_led_pin = 12;
int green_led_pin = 11;

int led_delay_ms = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led_pin, OUTPUT);
  pinMode(orange_led_pin, OUTPUT);
  pinMode(green_led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led_pin, HIGH);
  digitalWrite(orange_led_pin, LOW);
  digitalWrite(green_led_pin, LOW);
  delay(led_delay_ms);

  digitalWrite(red_led_pin, HIGH);
  digitalWrite(orange_led_pin, HIGH);
  digitalWrite(green_led_pin, LOW);
  delay(led_delay_ms);

  digitalWrite(red_led_pin, LOW);
  digitalWrite(orange_led_pin, LOW);
  digitalWrite(green_led_pin, HIGH);
  delay(led_delay_ms);

  digitalWrite(red_led_pin, LOW);
  digitalWrite(orange_led_pin, HIGH);
  digitalWrite(green_led_pin, LOW);
  delay(led_delay_ms);
}
