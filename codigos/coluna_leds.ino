 
const int LED_VERDE = 4;
const int LED_AMARELO = 6;
const int LED_VERMELHO = 8;
const int POTENCIOMETRO = A0;

int leituraPotenc = 0;

void setup() {
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int leituraPotenc = analogRead(POTENCIOMETRO);

  //Imprimir a leitura do potenciômetro
  Serial.print("Leitura: ");
  Serial.println(leituraPotenc);

  // Controla os LEDs com base na leitura
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);

  if(leituraPotenc >= 250 && leituraPotenc <= 500) {
    digitalWrite(LED_VERDE, HIGH);

  } else if(leituraPotenc >= 501 && leituraPotenc <= 750) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AMARELO, HIGH);

  } else if(leituraPotenc >= 751) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, HIGH);
  }
}
