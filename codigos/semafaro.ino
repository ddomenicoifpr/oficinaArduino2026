const int LED_VERMELHO = 8;
const int LED_AMARELO = 7;
const int LED_VERDE = 5;

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  digitalWrite(LED_VERMELHO, HIGH);

  delay(2000);

  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, HIGH);

  delay(2000);

  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);

  delay(2000);

  digitalWrite(LED_AMARELO, LOW);
}
