#define botamRed 6
#define botamYellow 7
#define ledRed 8
#define ledYellow 9

void setup() {
  pinMode(botamRed, INPUT);
  pinMode(botamYellow, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void loop() {
  //SE ISTO
  if ((digitalRead(botamRed) == HIGH)) {
    //OPERADOR ! INVERTE O ESTADO DA LED
    digitalWrite(ledRed, !digitalRead(ledRed));
  } else if ((digitalRead(botamYellow) == HIGH)) { //SE NAO ISTO
    digitalWrite(ledYellow, !digitalRead(ledYellow));
  }
}
