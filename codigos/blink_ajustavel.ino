const int LED = 8;
const int POTENCIOMETRO = A0;

int valorPotenciometro = 0;

void setup() {
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  valorPotenciometro = analogRead(A0);
  Serial.print("Estado: ");
  Serial.println(valorPotenciometro);

  digitalWrite(LED, HIGH);

  delay(valorPotenciometro);

  digitalWrite(LED, LOW);

  delay(valorPotenciometro);
}
