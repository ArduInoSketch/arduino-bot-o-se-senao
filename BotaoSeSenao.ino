#define led1 6 //DEFINE PINOS
#define led2 7
#define botao1 8
#define botao2 9
void setup() {
  pinMode(led1, OUTPUT); //SAIDA
  pinMode(led2, OUTPUT);
  pinMode(botao1, INPUT_PULLUP); //ENTRADA
  pinMode(botao2, INPUT_PULLUP);
}
void loop() {
  //SE FOR VERDADEIRO LIGA A LED1 E DESLIGA LED2
  if ((digitalRead(botao1) == LOW) && (digitalRead(botao2) == HIGH)) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    //ENTÃO SE FOR VERDADEIRO LIGA A LED2 E DESLIGA LED1
  } else if ((digitalRead(botao2) == LOW) && (digitalRead(botao1) == HIGH)) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    //ENTÃO SE FOR VERDADEIRO DESLIGA AS LEDS
  } else if ((digitalRead(botao2) == LOW) && (digitalRead(botao1) == LOW)) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    //ENTÃO SE NENHUMA FOR VERDADEIRA LIGA TODAS LEDS
  } else {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }
  delay(200);
}
