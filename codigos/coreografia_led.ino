const int LED_VERDE = 4;
const int LED_AMARELO = 6;
const int LED_VERMELHO = 8;
const int BOTAO = 12;

int estadoBotaoAtual    = LOW;
int estadoBotaoAnterior = LOW;
int contador = 0;


void setup() {
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BOTAO, INPUT);

  Serial.begin(9600);
}

void loop() {
  estadoBotaoAtual = digitalRead(BOTAO);

  //Imprimir estado do botão
  Serial.print("Estado: ");
  Serial.println(estadoBotaoAtual);

  // Detecta mudança de estado (botão foi pressionado)
  if (estadoBotaoAtual == HIGH && estadoBotaoAnterior == LOW) {
    contador++;
    if (contador > 3) {
      contador = 0;
    }

    delay(200); // debounce simples
  }

  estadoBotaoAnterior = estadoBotaoAtual;

  // Controla os LEDs com base no contador
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);

  if(contador == 1)
    digitalWrite(LED_VERDE, HIGH);
  else if(contador == 2)
    digitalWrite(LED_AMARELO, HIGH);
  else if(contador == 3)
  	digitalWrite(LED_VERMELHO, HIGH);
}
