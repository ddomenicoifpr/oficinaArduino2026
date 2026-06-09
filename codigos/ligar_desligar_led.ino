const int LED = 8;
const int BOTAO = 12;

int estadoBotao = LOW;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);

  Serial.begin(9600);
}

void loop() {
  estadoBotao = digitalRead(BOTAO);
  Serial.print("Estado: ");
  Serial.println(estadoBotao);

  if (estadoBotao == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
